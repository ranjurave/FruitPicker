// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FruitPickerGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FRUITPICKER_API UFruitPickerGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UFruitPickerGameInstance(const FObjectInitializer & ObjectInitializer);
	virtual void Init();

	UFUNCTION(Exec)
		void Host();

	UFUNCTION(Exec)
		void Join(const FString& Address);
};
