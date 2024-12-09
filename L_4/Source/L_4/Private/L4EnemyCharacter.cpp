// Netology


#include "L4EnemyCharacter.h"

// Sets default values
AL4EnemyCharacter::AL4EnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AL4EnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AL4EnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AL4EnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

