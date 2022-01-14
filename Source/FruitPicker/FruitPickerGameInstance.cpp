// Fill out your copyright notice in the Description page of Project Settings.


#include "FruitPickerGameInstance.h"

#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
<<<<<<< HEAD
#include "FruitPickerCharacter.h"
#include "Blueprint/UserWidget.h"
=======
>>>>>>> parent of 91dec79 (Join with Menu finished)
#include "FruitPickable.h"
#include "Blueprint/UserWidget.h"

UFruitPickerGameInstance::UFruitPickerGameInstance(const FObjectInitializer& ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUserWidget> MainMenuBPClass(TEXT("/Game/UI/MainMenu_WBP"));
	if (!ensure(MainMenuBPClass.Class != nullptr)) return;
	MainMenuClass = MainMenuBPClass.Class;
}

void UFruitPickerGameInstance::Init()
{
	//UE_LOG(LogTemp, Warning, TEXT("Found Class %s"), *MainMenuClass->GetName());
}

void UFruitPickerGameInstance::Host()
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 10, FColor::Green, TEXT("Hosting"));

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	World->ServerTravel("/Game/ThirdPersonCPP/Maps/GameMap?listen");
}

<<<<<<< HEAD
void UFruitPickerGameInstance::Join(const FString& Address, AFruitPickerCharacter* Client) {
	if (Menu != nullptr) {
		Menu->Teardown();
	}
=======
void UFruitPickerGameInstance::Join(const FString& Address) {
>>>>>>> parent of 91dec79 (Join with Menu finished)
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 10, FColor::Blue, FString::Printf(TEXT("Joining %s"), *Address));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;
	AFruitPickerCharacter* PlayerCharacter = Cast<AFruitPickerCharacter>(PlayerController->GetPawn());
	if (!ensure(PlayerCharacter != nullptr)) return;
	PlayerCharactersJoined.Add(Client);
	PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
}

void UFruitPickerGameInstance::LoadMainMenu()
{
	if (!ensure(MainMenuClass != nullptr)) return;
	UUserWidget* Menu = CreateWidget<UUserWidget>(this, MainMenuClass);
	if (!ensure(Menu != nullptr)) return;
	Menu->AddToViewport();

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(Menu->TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	PlayerController->SetInputMode(InputModeData);
	PlayerController->bShowMouseCursor = true;
}
