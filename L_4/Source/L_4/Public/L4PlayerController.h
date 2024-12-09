// Netology

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "L4PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class L_4_API AL4PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AL4PlayerController();

protected:
	virtual void BeginPlay() override;
};
