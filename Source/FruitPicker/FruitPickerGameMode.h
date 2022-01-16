// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "FruitPickable.h"
#include "GameFramework/Actor.h"

#include "FruitPickerGameMode.generated.h"

class AFruitPickable;
UCLASS(minimalapi)
class AFruitPickerGameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere)
	//	TSubclassOf<AActor> Mango;
	//UPROPERTY(EditAnywhere)
	//	TSubclassOf<AActor> Orange;
	//UPROPERTY(EditAnywhere)
	//	TSubclassOf<AActor> Apple;

	//TODO implement in array
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSubclassOf<AFruitPickable>> FruitDropList;

	float SpawnZ = 50.0f;

	UPROPERTY(EditAnywhere)
		float SpawnMinX;
	UPROPERTY(EditAnywhere)
		float SpawnMaxX;
	UPROPERTY(EditAnywhere)
		float SpawnMinY;
	UPROPERTY(EditAnywhere)
		float SpawnMaxY;

	AFruitPickerGameMode();
	void SpawnFruit();

	UFUNCTION()
	void GameOverMenu();

private:
	TSubclassOf<class UUserWidget> FinishMenuClass;

};



