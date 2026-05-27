// Copyright Epic Games, Inc. All Rights Reserved.

#include "TofuArmorWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UTofuArmorWheelFront::UTofuArmorWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}