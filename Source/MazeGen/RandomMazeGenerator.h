#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomMazeGenerator.generated.h"

UCLASS()
class MAZEGEN_API ARandomMazeGenerator : public AActor
{
	GENERATED_BODY()
	
public:	

	ARandomMazeGenerator();

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Maze Settings")
	TSubclassOf<class AMazeCell> CellToSwapClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Maze Settings")
	int ColumnNumber = 8;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Maze Settings")
	int RowNumber = 9;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Maze Settings")
	float DistanceXBetweenCells = 401;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Maze Settings")
	float DistanceYBetweenCells = 401;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Maze Settings")
	float WaitTimeBetweenCreateCells = 0.5f;

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;


private:

	TArray<AMazeCell*> CellList;
	
	bool bRandomizeMaze = false;
	float CurrentDeltaTime = 0.0f;

	int VisitedCells;
	TArray<int> CellStack;
	int CurrentIndexCell;

private:

	int GetAdjacentCellWithWalls(const int32& IndexCell);

};