// Netology

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "L4DamageActor.generated.h"

UCLASS()
class L_4_API AL4DamageActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AL4DamageActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
