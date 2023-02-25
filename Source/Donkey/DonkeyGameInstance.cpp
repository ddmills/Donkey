// Fill out your copyright notice in the Description page of Project Settings.


#include "DonkeyGameInstance.h"


UDonkeyGameInstance::UDonkeyGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("CONSTRUCTOR"));
}

void UDonkeyGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("INIT"));
}
