// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"

#include "Components/Button.h"
<<<<<<< HEAD
#include "Components/WidgetSwitcher.h"
#include "Components/EditableTextBox.h"
#include "FruitPickerCharacter.h"
=======
>>>>>>> parent of 91dec79 (Join with Menu finished)

bool UMainMenu::Initialize() {
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(Host != nullptr)) return false;
	Host->OnClicked.AddDynamic(this, &UMainMenu::HostServer);

	return true;
}

void UMainMenu::HostServer() {
	UE_LOG(LogTemp, Warning, TEXT("host server"));
<<<<<<< HEAD

	if (MenuInterface != nullptr) {
		MenuInterface->Host();
	}
}

void UMainMenu::OpenJoinMenu() {
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(JoinMenu != nullptr)) return;

	MenuSwitcher->SetActiveWidget(JoinMenu);

}

void UMainMenu::OpenMainMenu() {
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(MainMenu != nullptr)) return;

	MenuSwitcher->SetActiveWidget(MainMenu);
}

void UMainMenu::JoinServer() {
	if (MenuInterface != nullptr) {
		if (!ensure(IPAddressField != nullptr)) return;
		const FString Address = IPAddressField->GetText().ToString();

		if (!ensure(NameField != nullptr)) return;
		const FString EnteredPlayerName = NameField->GetText().ToString();
		UWorld* World = GetWorld();
		if (!ensure(World != nullptr)) return;
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (!ensure(PlayerController != nullptr)) return;
		AFruitPickerCharacter* PlayerCharacter = Cast<AFruitPickerCharacter>(PlayerController->GetPawn());
		PlayerCharacter->PlayerName = EnteredPlayerName;
		//UE_LOG(LogTemp, Warning, TEXT("%s"), *PlayerCharacter->PlayerName);
		MenuInterface->Join(Address, PlayerCharacter);
	}
=======
>>>>>>> parent of 91dec79 (Join with Menu finished)
}