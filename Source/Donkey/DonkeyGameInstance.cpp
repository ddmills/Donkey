// Fill out your copyright notice in the Description page of Project Settings.


#include "DonkeyGameInstance.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"


UDonkeyGameInstance::UDonkeyGameInstance(const FObjectInitializer& ObjectInitializer)
{

}

void UDonkeyGameInstance::Init()
{
	Super::Init();
}

void UDonkeyGameInstance::Host()
{
	UEngine* Engine = GetEngine();

	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Yellow, TEXT("Hosting"));

	UWorld* World = GetWorld();

	if (!ensure(World!= nullptr)) return;

	World->ServerTravel("/Game/Donkey/Maps/PuzzleMap?listen");
}

void UDonkeyGameInstance::Join(const FString& Address)
{
	UEngine* Engine = GetEngine();

	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Yellow, FString::Printf(TEXT("Joining %s"), *Address));

	APlayerController* PlayerController = GetFirstLocalPlayerController();

	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
}
