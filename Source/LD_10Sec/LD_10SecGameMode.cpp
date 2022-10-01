// Copyright Epic Games, Inc. All Rights Reserved.

#include "LD_10SecGameMode.h"
#include "LD_10SecPlayerController.h"
#include "LD_10SecCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALD_10SecGameMode::ALD_10SecGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALD_10SecPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}