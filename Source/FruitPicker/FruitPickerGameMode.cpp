// Copyright Epic Games, Inc. All Rights Reserved.

#include "FruitPickerGameMode.h"
#include "FruitPickerCharacter.h"
#include "UObject/ConstructorHelpers.h"


AFruitPickerGameMode::AFruitPickerGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void AFruitPickerGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AFruitPickerGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFruitPickerGameMode::SpawnFruit()
{
	UE_LOG(LogTemp, Warning, TEXT("Fruit Dropped"));
	float RandX = FMath::RandRange(SpawnMinX, SpawnMinX);
	float RandY = FMath::RandRange(SpawnMinY, SpawnMinY);

	FVector SpawnPosition = FVector(RandX, RandY, SpawnZ);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
	GetWorld()->SpawnActor(Fruit, &SpawnPosition, &SpawnRotation);
}
