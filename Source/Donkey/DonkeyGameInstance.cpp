// Fill out your copyright notice in the Description page of Project Settings.


#include "DonkeyGameInstance.h"
#include "Engine/Engine.h"


UDonkeyGameInstance::UDonkeyGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("CONSTRUCTOR"));
}

void UDonkeyGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("INIT"));
}

void UDonkeyGameInstance::Host()
{
	UEngine* Engine = GetEngine();

	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));
}

void UDonkeyGameInstance::Join(const FString& Address)
{
	UEngine* Engine = GetEngine();

	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));
}
