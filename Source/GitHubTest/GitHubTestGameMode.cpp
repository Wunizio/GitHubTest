// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitHubTestGameMode.h"
#include "GitHubTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitHubTestGameMode::AGitHubTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
