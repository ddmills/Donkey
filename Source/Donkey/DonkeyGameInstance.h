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

public:
	UDonkeyGameInstance(const FObjectInitializer &ObjectInitializer);
	virtual void Init() override;
};
