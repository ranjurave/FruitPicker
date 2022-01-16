// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MenuInterface.h"
#include "FruitPickerGameInstance.generated.h"

UCLASS()
class FRUITPICKER_API UFruitPickerGameInstance : public UGameInstance, public IMenuInterface
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
	TSubclassOf<class UUserWidget> MainMenuClass;
	TSubclassOf<class UUserWidget> GameOverClass;
	class UMainMenu* Menu;
	class UGameOverMenu* GameOverMenu;
};
