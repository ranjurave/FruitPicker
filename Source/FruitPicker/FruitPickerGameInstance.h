// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
<<<<<<< HEAD
#include "MenuInterface.h"
#include "Containers/Array.h"
//#include "FruitPickerCharacter.h"
=======
>>>>>>> parent of 91dec79 (Join with Menu finished)
#include "FruitPickerGameInstance.generated.h"

class UUserWidget;
class UMainMenu;
class AFruitPickerCharacter;
UCLASS()
class FRUITPICKER_API UFruitPickerGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UFruitPickerGameInstance(const FObjectInitializer & ObjectInitializer);
	virtual void Init();

	UFUNCTION(Exec)
		void Host();

	UFUNCTION(Exec)
		void Join(const FString& Address, AFruitPickerCharacter* Client);

	UFUNCTION(BlueprintCallable)
		void LoadMainMenu();

private:
	TSubclassOf<UUserWidget> MainMenuClass;
<<<<<<< HEAD
	UMainMenu* Menu;

public:
	TArray<AFruitPickerCharacter*> PlayerCharactersJoined;
=======
>>>>>>> parent of 91dec79 (Join with Menu finished)
};
