// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyGameMode.h"
#include "DonkeyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyGameMode::ADonkeyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
