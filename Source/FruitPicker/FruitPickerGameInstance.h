// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MenuInterface.h"
#include "Containers/Array.h"
#include "FruitPickerCharacter.h"
#include "FruitPickerGameInstance.generated.h"

class UUserWidget;
class UMainMenu;
UCLASS()
class FRUITPICKER_API UFruitPickerGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()

	UFruitPickerGameInstance(const FObjectInitializer & ObjectInitializer);
	virtual void Init();

	UFUNCTION(Exec)
		void Host();

	UFUNCTION(Exec)
		void Join(const FString& Address, FString ClientName);

	UFUNCTION(BlueprintCallable)
		void LoadMainMenu();

private:
	TSubclassOf<UUserWidget> MainMenuClass;

	UMainMenu* Menu;

	TArray<AFruitPickerCharacter> PlayerCharacterJoined;
};
