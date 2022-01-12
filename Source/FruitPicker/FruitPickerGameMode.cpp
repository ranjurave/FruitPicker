// Copyright Epic Games, Inc. All Rights Reserved.

#include "FruitPickerGameMode.h"
#include "FruitPickerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "EngineUtils.h"

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

	//UWorld* world = GetWorld(); 
	//for (TActorIterator<AActor> It(world, AActor::StaticClass()); It; ++It) {
	//	AActor* actor = *It;
	//	if (actor != NULL) {
	//		FruitDropList.Add(actor);
	//	}
	//}
}

void AFruitPickerGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFruitPickerGameMode::SpawnFruit()
{
	UE_LOG(LogTemp, Warning, TEXT("Fruit Dropped"));

	//int32 countFruit = FruitDropList.Num();
	//if (countFruit == 0) return;
	float RandX = FMath::RandRange(SpawnMinX, SpawnMaxX);
	float RandY = FMath::RandRange(SpawnMinY, SpawnMaxY);

	FVector SpawnPosition = FVector(RandX, RandY, SpawnZ);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	int32 randomNumber = FMath::RandRange(1, 3);
	switch (randomNumber)
	{
	case 1:
		GetWorld()->SpawnActor(Mango , &SpawnPosition, &SpawnRotation);
		break;
	case 2:
		GetWorld()->SpawnActor(Apple, &SpawnPosition, &SpawnRotation);	
		break;
	case 3:
		GetWorld()->SpawnActor(Orange, &SpawnPosition, &SpawnRotation);
		break;
	default:
		break;
	}
}
