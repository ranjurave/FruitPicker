// Fill out your copyright notice in the Description page of Project Settings.


#include "FruitPickerGameInstance.h"

UFruitPickerGameInstance::UFruitPickerGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("gi constructor"));
}

void UFruitPickerGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("init"));
}
