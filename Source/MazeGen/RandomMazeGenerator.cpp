#include "RandomMazeGenerator.h"
#include "MazeField.h"


ARandomMazeGenerator::ARandomMazeGenerator()
{
	PrimaryActorTick.bCanEverTick = true;
}


void ARandomMazeGenerator::BeginPlay()
{
	Super::BeginPlay();

	FVector SpawnPosition = GetActorLocation();

	for (int iRow = 0; iRow < RowNumber; ++iRow)
	{
		SpawnPosition.X = GetActorLocation().X;

		for (int iCol = 0; iCol < ColumnNumber; ++iCol)
		{
			// Создаём ячейки
			FActorSpawnParameters SpawnParamenters;
			SpawnParamenters.Owner = this;

			AMazeCell* SpawnedCell = GetWorld()->SpawnActor<AMazeCell>(CellToSwapClass, SpawnPosition, FRotator::ZeroRotator, SpawnParamenters);

			if (SpawnedCell != nullptr)
			{
				// Присоединяем ячейки к актёру (генератору)
				SpawnedCell->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

				int CellIndex = iRow * ColumnNumber + iCol;

				SpawnedCell->Initialize(iRow, iCol, CellIndex);

				CellList.Add(SpawnedCell);
			}

			SpawnPosition.X += DistanceXBetweenCells;
		}

		SpawnPosition.Y += DistanceYBetweenCells;
	}

	// Генерируем рандомную ячейку, с которой надо начать
	int RandomRow = FMath::RandRange(0, RowNumber - 1);
	int RandomCol = FMath::RandRange(0, ColumnNumber - 1);

	CurrentIndexCell = RandomRow * ColumnNumber + RandomCol;

	// Создать первую ячейку
	CellList[CurrentIndexCell]->SetIsCreated(true);
	CellList[CurrentIndexCell]->ShowFloor();
	CellList[CurrentIndexCell]->ShowWall(0);
	CellList[CurrentIndexCell]->ShowWall(1);
	CellList[CurrentIndexCell]->ShowWall(2);
	CellList[CurrentIndexCell]->ShowWall(3);

	// Добавляем ячейку в список пройденных
	CellStack.Push(CurrentIndexCell);
	VisitedCells = 1;
	bRandomizeMaze = true;
}


void ARandomMazeGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRandomizeMaze)
	{
		CurrentDeltaTime += DeltaTime;

		if (CurrentDeltaTime > WaitTimeBetweenCreateCells)
		{
			CurrentDeltaTime = 0.0f;

			if (VisitedCells < CellList.Num())
			{
				UE_LOG(LogTemp, Warning, TEXT("Adding Cell: %d / %d  "), CellStack.Num(), CellList.Num());

				// Ищем соседа, делаем к нему проход
				int NextIndexCell = GetAdjacentCellWithWalls(CurrentIndexCell);

				if (NextIndexCell > -1)
				{
					// Добавляем ячейку в список пройденных
					CellStack.Push(CurrentIndexCell);
					CurrentIndexCell = NextIndexCell;
					VisitedCells++;
				}
				else
				{
					// Если вернулись к ячейке, то возвращаем её из пройденных
					if (CellStack.Num() > 0)
					{
						CurrentIndexCell = CellStack.Pop();
					}
					else
					{
						VisitedCells = CellList.Num();
						CellList[0]->HideWall(2);
						CellList[RowNumber*ColumnNumber-1]->HideWall(1);
						UE_LOG(LogTemp, Warning, TEXT("Random Maze generation completed"));

						bRandomizeMaze = false;
					}
				}

				CurrentDeltaTime = 0.0f;
			}
			else
			{
				VisitedCells = CellList.Num();
				bRandomizeMaze = false;
				CellList[0]->HideWall(2);
				CellList[RowNumber * ColumnNumber - 1]->HideWall(1);
				UE_LOG(LogTemp, Warning, TEXT("Random Maze generation completed"), CellStack.Num(), RowNumber, ColumnNumber);
			}
		}
	}
}

int32 ARandomMazeGenerator::GetAdjacentCellWithWalls(const int32& IndexCell)
{
	TArray<int> NeighbourCells;
	TArray<int> Directions;


	// Координаты отдельно взятой ячейки
	int Col = CellList[IndexCell]->GetCoords().X;
	int Row = CellList[IndexCell]->GetCoords().Y;

	// Делаем направления
	// Верх
	if ((Row - 1) >= 0)
	{
		int Next = (Row - 1) * ColumnNumber + Col;

		if (CellList[Next]->AllWallsIntact()) 
		{
			Directions.Add(0);
			NeighbourCells.Add(Next);
		}
	}

	// Нижняя
	if ((Row + 1) < RowNumber)
	{
		int Next = (Row + 1) * ColumnNumber + Col;

		if (CellList[Next]->AllWallsIntact()) // Если у ячейки все стенки стоят
		{
			Directions.Add(1);
			NeighbourCells.Add(Next);
		}
	}

	// Левая
	if ((Col - 1) >= 0)
	{
		int Next = Row * ColumnNumber + (Col - 1);

		if (CellList[Next]->AllWallsIntact()) 
		{
			Directions.Add(2);
			NeighbourCells.Add(Next);
		}
	}

	// Право
	if ((Col + 1) < ColumnNumber)
	{
		int Next = Row * ColumnNumber + (Col + 1);

		if (CellList[Next]->AllWallsIntact()) 
		{
			Directions.Add(3);
			NeighbourCells.Add(Next);
		}
	}

	int NextCellIndex = -1;

	// Рандомное направление выбираем
	if (NeighbourCells.Num() > 0)
	{
		int32 RandomDirection = FMath::RandRange(0, Directions.Num() - 1);

		NextCellIndex = NeighbourCells[RandomDirection];


		if (!CellList[NextCellIndex]->GetIsCreated())
		{
			CellList[NextCellIndex]->SetIsCreated(true);
			CellList[NextCellIndex]->ShowFloor();

			CellList[NextCellIndex]->ShowWall(0);
			CellList[NextCellIndex]->ShowWall(1);
			CellList[NextCellIndex]->ShowWall(2);
			CellList[NextCellIndex]->ShowWall(3);

		}

		// Берём ячейку как текущую
		switch (Directions[RandomDirection])
		{
		case 0 : // Верх
			CellList[NextCellIndex]->CreatePassage(1); 
			CellList[IndexCell]->CreatePassage(0);
			break;

		case 1: // Вниз
			CellList[NextCellIndex]->CreatePassage(0);
			CellList[IndexCell]->CreatePassage(1); 
			break;

		case 2: // Влево
			CellList[NextCellIndex]->CreatePassage(3); 
			CellList[IndexCell]->CreatePassage(2);
			break;

		case 3: // Вправо
			CellList[NextCellIndex]->HideWall(2);  
			CellList[IndexCell]->HideWall(3);
			break;
		}

	}
	return NextCellIndex;
}
