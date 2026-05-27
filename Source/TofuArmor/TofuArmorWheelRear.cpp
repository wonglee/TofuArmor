// Copyright Epic Games, Inc. All Rights Reserved.

#include "TofuArmorWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UTofuArmorWheelRear::UTofuArmorWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}