// Copyright Epic Games, Inc. All Rights Reserved.

#include "FruitPickerGameMode.h"
#include "FruitPickerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"
AFruitPickerGameMode::AFruitPickerGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	ConstructorHelpers::FClassFinder<UUserWidget> GameFinishedBPClass(TEXT("/Game/UI/GameOver_WBP"));
	if (!ensure(GameFinishedBPClass.Class != nullptr)) return;
	FinishMenuClass = GameFinishedBPClass.Class;

	MaxFruitCount = 10;
}

void AFruitPickerGameMode::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("Found Class %s"), *FinishMenuClass->GetName());
}

void AFruitPickerGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFruitPickerGameMode::SpawnFruit()
{
	float RandX = FMath::RandRange(SpawnMinX, SpawnMaxX);
	float RandY = FMath::RandRange(SpawnMinY, SpawnMaxY);

	FVector SpawnPosition = FVector(RandX, RandY, SpawnZ);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	int32 randomNumber = FMath::RandRange(0, FruitDropList.Num() - 1);
	GetWorld()->SpawnActor(FruitDropList[randomNumber], &SpawnPosition, &SpawnRotation);
}

void AFruitPickerGameMode::GameOverMenu() {
	if (HasAuthority()) {
		if (!ensure(FinishMenuClass != nullptr)) return;
		UUserWidget* FinishMenu = CreateWidget<UUserWidget>(GetWorld(), FinishMenuClass);
		if (!ensure(FinishMenu != nullptr)) return;
		FinishMenu->AddToViewport();
	}
}
