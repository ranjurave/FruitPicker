// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "FruitPickable.h"
#include "GameFramework/Actor.h"

#include "FruitPickerGameMode.generated.h"

UCLASS(minimalapi)
class AFruitPickerGameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> Mango;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> Orange;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> Apple;

	//TODO implement in array
	//UPROPERTY()
	//	TArray<AActor*> FruitDropList;

	float SpawnZ = 900.0f;

	UPROPERTY(EditAnywhere)
		float SpawnMinX;
	UPROPERTY(EditAnywhere)
		float SpawnMaxX;
	UPROPERTY(EditAnywhere)
		float SpawnMinY;
	UPROPERTY(EditAnywhere)
		float SpawnMaxY;

public:
	AFruitPickerGameMode();
	void SpawnFruit();
};



