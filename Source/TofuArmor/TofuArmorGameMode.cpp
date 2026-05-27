// Copyright Epic Games, Inc. All Rights Reserved.

#include "TofuArmorGameMode.h"
#include "TofuArmorPlayerController.h"

ATofuArmorGameMode::ATofuArmorGameMode()
{
	PlayerControllerClass = ATofuArmorPlayerController::StaticClass();
}
