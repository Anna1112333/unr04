// Netology


#include "L4GameMode.h"
#include "D:\Games2024\Task\Ta_4\L_4\Source\L_4\Public\L4DefaultCharacter.h" 
#include "D:\Games2024\Task\Ta_4\L_4\Source\L_4\Public\L4PlayerController.h"


AL4GameMode::AL4GameMode() {
	DefaultPawnClass = AL4DefaultCharacter::StaticClass();
	PlayerControllerClass = AL4PlayerController::StaticClass();

}

