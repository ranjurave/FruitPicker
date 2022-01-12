// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
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
		TSubclassOf<AActor> Fruit;

	float SpawnZ = 500.0f;

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



