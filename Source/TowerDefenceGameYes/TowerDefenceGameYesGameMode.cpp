// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TowerDefenceGameYesGameMode.h"
#include "TowerDefenceGameYesHUD.h"
#include "TowerDefenceGameYesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATowerDefenceGameYesGameMode::ATowerDefenceGameYesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATowerDefenceGameYesHUD::StaticClass();
}
