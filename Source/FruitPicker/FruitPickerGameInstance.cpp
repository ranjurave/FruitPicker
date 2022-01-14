// Fill out your copyright notice in the Description page of Project Settings.


#include "FruitPickerGameInstance.h"

#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "FruitPickable.h"
#include "MainMenu.h"

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
	if (Menu != nullptr) {
		Menu->Teardown();
	}
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 10, FColor::Green, TEXT("Hosting"));

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	World->ServerTravel("/Game/ThirdPersonCPP/Maps/GameMap?listen");
}

void UFruitPickerGameInstance::Join(const FString& Address, FString ClientName) {
	if (Menu != nullptr) {
		Menu->Teardown();
	}
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 10, FColor::Blue, FString::Printf(TEXT("Joining %s"), *Address));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;
	AFruitPickerCharacter* PlayerCharacter = Cast<AFruitPickerCharacter>(PlayerController->GetPawn());
	if (!ensure(PlayerCharacter != nullptr)) return;
	PlayerCharacter->PlayerName = ClientName;
	PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
}

void UFruitPickerGameInstance::LoadMainMenu()
{
	if (!ensure(MainMenuClass != nullptr)) return;
	Menu = CreateWidget<UMainMenu>(this, MainMenuClass);
	if (!ensure(Menu != nullptr)) return;
	Menu->Setup();
	Menu->SetMenuInterface(this);

}
