// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4startGameMode.h"
#include "UE4startCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4startGameMode::AUE4startGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
