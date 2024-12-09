// Netology


#include "L4PlayerController.h"


AL4PlayerController::AL4PlayerController()
{
}

void AL4PlayerController::BeginPlay()
{
	Super::BeginPlay();

	SetInputMode(FInputModeGameOnly());
	bShowMouseCursor = false;
}

