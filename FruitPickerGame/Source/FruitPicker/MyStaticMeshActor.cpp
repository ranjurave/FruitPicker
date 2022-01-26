// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStaticMeshActor.h"


AMyStaticMeshActor::AMyStaticMeshActor() {
	PrimaryActorTick.bCanEverTick = true;
	SetMobility(EComponentMobility::Movable);


}

void AMyStaticMeshActor::BeginPlay() {
	Super::BeginPlay();

	if (HasAuthority()) {
		SetReplicates(true);
		SetReplicateMovement(true);
	}
	GlobalStartLocation = GetActorLocation();
	GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);
}

void AMyStaticMeshActor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (ActiveTriggers > 0) {

		if (HasAuthority()) {
			FVector Location = GetActorLocation();
			float JourneyLength = (GlobalTargetLocation - GlobalStartLocation).Size();
			float JourneyTravelled = (Location - GlobalStartLocation).Size();
			if (JourneyTravelled >= JourneyLength) {
				FVector swap = GlobalStartLocation;
				GlobalStartLocation = GlobalTargetLocation;
				GlobalTargetLocation = swap;
			}
			FVector Direction = (GlobalTargetLocation - GlobalStartLocation).GetSafeNormal();
			Location += Direction * Speed * DeltaTime;
			SetActorLocation(Location);
		}
	}
}

void AMyStaticMeshActor::AddActiveTrigger() {
	ActiveTriggers++;
}
void AMyStaticMeshActor::RemoveActiveTrigger() {
	if (ActiveTriggers > 0) {
		ActiveTriggers--;
	}
}
