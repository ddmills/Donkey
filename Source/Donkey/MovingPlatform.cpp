// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	SetMobility(EComponentMobility::Movable);
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	GlobalStartLocation = GetActorLocation();
	GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);

	if (HasAuthority()) {
		SetReplicates(true);
		SetReplicateMovement(true);
	}
}

void AMovingPlatform::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (ActiveTriggers <= 0) {
		return;
	}

	if (HasAuthority()) {
		FVector Location = GetActorLocation();
		float Distance = (GlobalTargetLocation - GlobalStartLocation).Size();
		float Travelled = (Location - GlobalStartLocation).Size();

		if (Travelled >= Distance)
		{
			FVector tmp = GlobalTargetLocation;
			GlobalTargetLocation = GlobalStartLocation;
			GlobalStartLocation = tmp;
		}

		FVector Direction = (GlobalTargetLocation - GlobalStartLocation).GetSafeNormal();

		Location += Direction * DeltaSeconds * Speed;

		SetActorLocation(Location);
	}
}

void AMovingPlatform::RemoveActiveTrigger()
{
	if (ActiveTriggers > 0) {
		ActiveTriggers--;
	}
}

void AMovingPlatform::AddActiveTrigger()
{
	ActiveTriggers++;
}
