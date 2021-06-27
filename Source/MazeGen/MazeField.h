#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MazeField.generated.h"

UCLASS()
class MAZEGEN_API AMazeCell : public AActor
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MazeField")
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MazeField")
	class UStaticMeshComponent* Floor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MazeField")
	class UStaticMeshComponent* Wall_0; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MazeField")
	class UStaticMeshComponent* Wall_1; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MazeField")
	class UStaticMeshComponent* Wall_2; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MazeField")
	class UStaticMeshComponent* Wall_3; 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MazeField")
	class UTextRenderComponent* DebugText;

public:

	AMazeCell();

protected:

	virtual void BeginPlay() override;

public:

	void Initialize(int32 Row, int32 Column, int32 Index);

	FORCEINLINE bool GetIsCreated() { return bCreated; };
	FORCEINLINE void SetIsCreated(bool Value) { bCreated = Value; };

	FORCEINLINE bool AllWallsIntact() { return (NumberWallsUp >= 4); };


	void HideFloor();

	void ShowFloor();

	void ShowWall(int WallIndex);

	void HideWall(int WallIndex);

	void CreatePassage(int WallIndex);


	FORCEINLINE FVector2D GetCoords()
	{
		return FVector2D(ColumnIndex, RowIndex); // X, Y
	}

private:
	bool bCreated;

	int ColumnIndex;
	int RowIndex;
	int NumberWallsUp = 0;
};