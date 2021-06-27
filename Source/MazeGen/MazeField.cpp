#include "MazeField.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"


AMazeCell::AMazeCell()
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	Floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor"));
	Floor->SetupAttachment(RootComponent);

	Wall_0 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_0"));
	Wall_0->SetupAttachment(RootComponent);

	Wall_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_1"));
	Wall_1->SetupAttachment(RootComponent);

	Wall_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_2"));
	Wall_2->SetupAttachment(RootComponent);

	Wall_3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall_3"));
	Wall_3->SetupAttachment(RootComponent);

	DebugText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("DebugText"));
	DebugText->SetupAttachment(RootScene);
	DebugText->Text = FText::FromString("");

	PrimaryActorTick.bCanEverTick = false;
}


void AMazeCell::BeginPlay()
{
	Super::BeginPlay();

	NumberWallsUp = 4;
	bCreated = false;

	Floor->SetVisibility(false, true);
	Floor->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	Wall_0->SetVisibility(false, true);
	Wall_0->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	Wall_1->SetVisibility(false, true);
	Wall_1->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	Wall_2->SetVisibility(false, true);
	Wall_2->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	Wall_3->SetVisibility(false, true);
	Wall_3->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	DebugText->SetVisibility(false, true);
}

void AMazeCell::Initialize(int Row, int Column, int Index)
{
	bCreated = false;

	RowIndex = Row;
	ColumnIndex = Column;

	NumberWallsUp = 4;

	if (DebugText != nullptr)
	{
		FString Text = FString::FromInt(Index) + " = (" + FString::FromInt(RowIndex) + "," + FString::FromInt(ColumnIndex) + ")";
		DebugText->SetText(FText::FromString(Text));
	}
}

void AMazeCell::HideFloor()
{
	Floor->SetVisibility(false, true);
	Floor->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
}

void AMazeCell::ShowFloor()
{
	Floor->SetVisibility(true, true);
	Floor->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
}

void AMazeCell::ShowWall(int WallIndex)
{
	switch (WallIndex)
	{
	case 0:
		Wall_0->SetVisibility(true, true); // Â
		Wall_0->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		break;
	case 1:
		Wall_1->SetVisibility(true, true); // Í
		Wall_1->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		break;
	case 2:
		Wall_2->SetVisibility(true, true); // Ë
		Wall_2->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		break;
	case 3:
		Wall_3->SetVisibility(true, true); // Ï
		Wall_3->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
		break;
	}
}

void AMazeCell::HideWall(int WallIndex)
{
	switch (WallIndex)
	{
	case 0:
		Wall_0->SetVisibility(false, true); // Â
		Wall_0->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
		break;
	case 1:
		Wall_1->SetVisibility(false, true); // Í
		Wall_1->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
		break;
	case 2:
		Wall_2->SetVisibility(false, true); // Ë
		Wall_2->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
		break;
	case 3:
		Wall_3->SetVisibility(false, true); // Ï
		Wall_3->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
		break;
	}
}


void AMazeCell::CreatePassage(int WallIndex)
{
	HideWall(WallIndex);
	NumberWallsUp -= 1;
}