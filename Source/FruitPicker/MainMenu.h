// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

class AFruitPickerCharacter;
UCLASS()
class FRUITPICKER_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual bool Initialize() override;

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* Host;

	UPROPERTY(meta = (BindWidget))
	class UButton* Join;

<<<<<<< HEAD
	UPROPERTY(meta = (BindWidget))
	class UButton* JoinGameButton;

	UPROPERTY(meta = (BindWidget))
	class UWidget* MainMenu;

	UPROPERTY(meta = (BindWidget))
	class UEditableTextBox* IPAddressField;

	UPROPERTY(meta = (BindWidget))
	class UEditableTextBox* NameField;

	UFUNCTION()
	void HostServer();

	UFUNCTION()
		void JoinServer();

	UFUNCTION()
	void OpenJoinMenu();

	UFUNCTION()
	void OpenMainMenu();

	IMenuInterface* MenuInterface;

	UPROPERTY()
	AFruitPickerCharacter* Player;
=======
	UFUNCTION()
		void HostServer();
>>>>>>> parent of 91dec79 (Join with Menu finished)
};
