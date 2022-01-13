// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FruitPickerGameInstance.generated.h"

class UUserWidget;
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

	UFUNCTION(BlueprintCallable)
		void LoadMainMenu();

private:
	TSubclassOf<UUserWidget> MainMenuClass;
};
