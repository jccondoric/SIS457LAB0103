// Copyright Epic Games, Inc. All Rights Reserved.

#include "SIS457LAB0103GameMode.h"
#include "SIS457LAB0103PlayerController.h"
#include "SIS457LAB0103Pawn.h"

ASIS457LAB0103GameMode::ASIS457LAB0103GameMode()
{
	// no pawn by default
	DefaultPawnClass = ASIS457LAB0103Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ASIS457LAB0103PlayerController::StaticClass();
}
