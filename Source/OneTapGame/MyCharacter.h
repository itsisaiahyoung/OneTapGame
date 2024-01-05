#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "PaperSpriteComponent.h"
#include "MyGun.h" // Include the MyGun header
#include "MyCharacter.generated.h"

UCLASS(Blueprintable, BlueprintType)
class AMyCharacter : public APaperCharacter
{
    GENERATED_BODY()

public:
    // Constructor
    AMyCharacter();

    // Called when the game begins
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // Function to equip a gun
    void EquipGun(AMyGun* GunToEquip);

private:
    float CurrentGunAngle;
    AMyGun* EquippedGun;

protected:
    // Set up player input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // Function for handling movement input
    void Move(const FInputActionValue& Value);

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCameraComponent* SideViewCameraComponent;

    // Mapping Context
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    class UInputMappingContext* DefaultMappingContext;

    // Jump Input Action
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    class UInputAction* JumpAction;

    // Move Input Action
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    class UInputAction* MoveAction;
};
