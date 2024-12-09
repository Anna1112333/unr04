// Netology

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "L4GameMode.h" 
#include "D:\Games2024\Task\Ta_4\L_4\Source\L_4\Public\L4GameMode.h" 
#include "L4DefaultCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UL4HealthComponent;
class UAnimMontage;

UCLASS()
class L_4_API AL4DefaultCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AL4DefaultCharacter();
	//UFUNCTION()
	//UL4HealthComponent* GetHealthComponent() const { return HealthComponent; }
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USpringArmComponent* SpringArmComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UCameraComponent* CameraComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components|Health")
	UL4HealthComponent* HealthComponent;

	UPROPERTY()
	UDecalComponent* CurrentCursor = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cursor")
	UMaterialInterface* CursorMaterial = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cursor")
	FVector CursorSize = FVector(20.0f, 40.0f, 40.0f);

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* DeathMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SPR")
	float SP = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SPR")
	float minSP = 400.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SPR")
	float maxSP = 1400.0f;

	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	float YRotation = -75.0f;
	float ArmLength = 1400.0f;
	float FOV = 55.0f;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Mouse0(float Value);

	//void OnDeath();
	//void OnHealthChanged(float NewHealth);

	//void RotationPlayerOnCursor();
};
