// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonGameGameMode.h"
#include "ThirdPersonGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonGameGameMode::AThirdPersonGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
