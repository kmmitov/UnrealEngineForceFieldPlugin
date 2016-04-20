// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "PluginFPS.h"
#include "PluginFPSGameMode.h"
#include "PluginFPSHUD.h"
#include "PluginFPSCharacter.h"

APluginFPSGameMode::APluginFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APluginFPSHUD::StaticClass();
}
