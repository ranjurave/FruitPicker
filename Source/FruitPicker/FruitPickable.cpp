// Fill out your copyright notice in the Description page of Project Settings.


#include "FruitPickable.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

#include "FruitPickerCharacter.h"

// Sets default values
AFruitPickable::AFruitPickable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
	RootComponent = MeshComp;
	MeshComp->SetSimulatePhysics(true);
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetupAttachment(MeshComp);

	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	if (HasAuthority()) {
		SetReplicates(true);
		SetReplicateMovement(true);
	}
}

// Called when the game starts or when spawned
void AFruitPickable::BeginPlay()
{
	Super::BeginPlay();	
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &AFruitPickable::HandleOverlap);
}

// Called every frame
void AFruitPickable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFruitPickable::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasAuthority()) {
		//UE_LOG(LogTemp, Warning, TEXT("Overlapped"));
		AFruitPickerCharacter* OverlapChar = Cast<AFruitPickerCharacter>(OtherActor);
		if (OverlapChar)
		{
			OverlapChar->IncrementFruitCount();

			Destroy();
		}

		Destroy();
	}
}


