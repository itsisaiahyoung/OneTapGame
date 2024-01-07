#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyGun.h" // Include the MyGun header
#include "PaperFlipbookComponent.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
    // Tick()
    PrimaryActorTick.bCanEverTick = true;

    // Create the Camera Boom (spring arm) component
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 500.0f;
    CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
    CameraBoom->bUsePawnControlRotation = false;
    CameraBoom->SetUsingAbsoluteRotation(true);
    CameraBoom->bDoCollisionTest = false;
    CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

    // Create the camera
    SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
    SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

    SideViewCameraComponent->bUsePawnControlRotation = false;

    // Set jump velocity
    GetCharacterMovement()->JumpZVelocity = 600.f; 

    // Set air control
    GetCharacterMovement()->AirControl = 0.5f; 

    CurrentGunAngle = 0.0f;
    EquippedGun = nullptr;

}


void AMyCharacter::BeginPlay()
{
    Super::BeginPlay();

    // Add input mapping context
    if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = PlayerController->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
    }

}

// Input setup
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

        // Jumping
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

        // Moving
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);

        // Bind the Fire action
        EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &AMyCharacter::Fire);

        // Bind right-click to ThrowGun function
        EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Triggered, this, &AMyCharacter::Throw);
    }
}

// Move function
void AMyCharacter::Move(const FInputActionValue& Value)
{
    FVector2D MovementVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(ForwardDirection, MovementVector.X);

        UPaperFlipbookComponent* MySprite = Cast<UPaperFlipbookComponent>(FindComponentByClass<UPaperFlipbookComponent>());
        if (MySprite)
        {
            if (MovementVector.X < 0.0f)
            {
                // Moving left - flip sprite to face left
                MySprite->SetRelativeScale3D(FVector(-1.0f, 1.0f, 1.0f));
            }
            else if (MovementVector.X > 0.0f)
            {
                // Moving right - flip sprite to face right
                MySprite->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
            }
        }
    }
}

void AMyCharacter::EquipGun(AMyGun* GunToEquip)
{
    if (GunToEquip)
    {
        UE_LOG(LogTemp, Warning, TEXT("Equipping gun %s"), *GunToEquip->GetName());
        GunToEquip->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        GunToEquip->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
        EquippedGun = GunToEquip;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("EquipGun called with null pointer."));
    }
}

void AMyCharacter::Fire()
{
    if (EquippedGun)
    {
        EquippedGun->Fire();
    }
}

void AMyCharacter::Throw()
{
    if (EquippedGun)
    {
        FVector ThrowDirection = GetActorForwardVector();
        float ThrowForce = 1000.0f;

        UE_LOG(LogTemp, Warning, TEXT("Throwing gun with direction: %s, force: %f"), *ThrowDirection.ToString(), ThrowForce);

        UPrimitiveComponent* GunPrimitiveComponent = Cast<UPrimitiveComponent>(EquippedGun->GetRootComponent());
        if (GunPrimitiveComponent)
        {
            GunPrimitiveComponent->SetSimulatePhysics(true);
        }

        // Detach the gun from the character
        EquippedGun->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        EquippedGun = nullptr; // Clear the equipped gun
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No gun equipped to throw."));
    }
}




void AMyCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (Controller)
    {
        FVector2D MousePosition;
        if (APlayerController* PC = Cast<APlayerController>(Controller))
        {
            PC->GetMousePosition(MousePosition.X, MousePosition.Y);

            FVector2D MouseScaleFactor = FVector2D(8.0f, 8.0f); // Adjust this value as needed
            FVector2D ScaledMousePosition = MousePosition * MouseScaleFactor;

            FVector WorldLocation;
            FVector WorldDirection;

            // Used ScaledMousePosition when converting to world coordinates
            PC->DeprojectScreenPositionToWorld(ScaledMousePosition.X, ScaledMousePosition.Y, WorldLocation, WorldDirection);

            FVector CharacterLocation = GetActorLocation();
            FVector2D Direction = FVector2D(WorldLocation.X - CharacterLocation.X, WorldLocation.Z - CharacterLocation.Z);
            float TargetAngle = FMath::Atan2(Direction.Y, Direction.X);

            // Clamp the angle to a semi-circle above the character
            float ClampedAngle = FMath::Clamp(FMath::RadiansToDegrees(TargetAngle), -180.0f, 180.0f);

            /*
            UE_LOG(LogTemp, Warning, TEXT("Direction: X=%f, Y=%f"), Direction.X, Direction.Y);
            UE_LOG(LogTemp, Warning, TEXT("TargetAngle: %f, ClampedAngle: %f"), FMath::RadiansToDegrees(TargetAngle), ClampedAngle);
            */

            // Define the radius of the arc
            float ArcRadius = 50.0f; // Adjust as needed

            // Calculate the new position of the gun in the arc
            FVector NewGunPosition = CharacterLocation + FVector(FMath::Cos(FMath::DegreesToRadians(ClampedAngle)) * ArcRadius, 0.0f, FMath::Sin(FMath::DegreesToRadians(ClampedAngle)) * ArcRadius);

            if(EquippedGun)
			{
                // Update the gun's position
                EquippedGun->SetActorLocation(NewGunPosition);

                // Determine sprite rotation
                if (ClampedAngle > 90.0f || ClampedAngle < -90.0f)
                {
                    // Flip the gun to face left
                    EquippedGun->SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
                }
                else
                {
                    // Gun faces right (original orientation)
                    EquippedGun->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
                }
			
			}
            
        }
    }
}
