// Copyright Epic Games, Inc. All Rights Reserved.

#include "RAMIGameMode.h"
#include "RAMICharacter.h"
#include "UObject/ConstructorHelpers.h"

ARAMIGameMode::ARAMIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
