// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DonkeyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class DONKEY_API UDonkeyGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:
	TSubclassOf<class UUserWidget> MenuClass;

public:
	UDonkeyGameInstance(const FObjectInitializer& ObjectInitializer);
	virtual void Init() override;

	UFUNCTION(BlueprintCallable, Exec)
	void Host();

	UFUNCTION(Exec)
	void Join(const FString& Address);
};
