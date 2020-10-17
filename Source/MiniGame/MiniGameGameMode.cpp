// Copyright Epic Games, Inc. All Rights Reserved.

#include "MiniGameGameMode.h"
#include "MiniGameHUD.h"
#include "MiniGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMiniGameGameMode::AMiniGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMiniGameHUD::StaticClass();
}
