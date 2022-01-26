// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MyStaticMeshActor.generated.h"

/**
 * 
 */
UCLASS()
class FRUITPICKER_API AMyStaticMeshActor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	AMyStaticMeshActor();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		float Speed = 5;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
		FVector TargetLocation;

	void AddActiveTrigger();
	void RemoveActiveTrigger();

private:
		FVector GlobalTargetLocation;
		FVector GlobalStartLocation;

		UPROPERTY(EditAnywhere)
			int ActiveTriggers = 1;

};
