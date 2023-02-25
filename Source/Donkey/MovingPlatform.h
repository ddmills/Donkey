// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class DONKEY_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	public:AMovingPlatform();

	protected:void BeginPlay() override;
	protected:void Tick(float DeltaSeconds) override;
	UPROPERTY(EditAnywhere)
	float Speed = 20;
	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
	FVector TargetLocation;

	private:FVector GlobalStartLocation;
	private:FVector GlobalTargetLocation;
};
