#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyGun.h"
#include "MyItem.h"
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
    GetCharacterMovement()->JumpZVelocity = 800.f; 

    // Set air control
    GetCharacterMovement()->AirControl = 0.5f; 

    CurrentGunAngle = 0.0f;
    EquippedItem = nullptr;
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

        // Bind the Fire action to start firing when the button is pressed
        EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &AMyCharacter::StartFiring);

        // Bind the Fire action to stop firing when the button is released
        EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &AMyCharacter::StopFiring);

        // Bind right-click to ThrowGun function
        EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Triggered, this, &AMyCharacter::Throw);

        // Bind the Reload action
        EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Triggered, this, &AMyCharacter::Reload);
    }
}

void AMyCharacter::StartFiring() {
    if (EquippedItem) {
        AMyGun* Gun = Cast<AMyGun>(EquippedItem);
        if (Gun) {
            Gun->StartFiring();
        }
    }
}

void AMyCharacter::StopFiring() {
    if (EquippedItem) {
        AMyGun* Gun = Cast<AMyGun>(EquippedItem);
        if (Gun) {
            Gun->StopFiring();
        }
    }
}

void AMyCharacter::Reload()
{
    if (AMyGun* Gun = Cast<AMyGun>(EquippedItem))
    {
        Gun->ReloadAmmo();

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

void AMyCharacter::EquipItem(AMyItem* ItemToEquip)
{
    if (ItemToEquip && !EquippedItem)
    {
        UE_LOG(LogTemp, Warning, TEXT("Equipping item %s"), *ItemToEquip->GetName());
        ItemToEquip->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        ItemToEquip->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
        EquippedItem = ItemToEquip;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("EquipItem failed"));
    }
}

void AMyCharacter::PickupItem(AMyItem* Item)
{
    if (Item && !EquippedItem)
    {
        UE_LOG(LogTemp, Warning, TEXT("Picking up item %s"), *Item->GetName());
        EquipItem(Item);  // Equip the item automatically
        Item->OnPickedUp();

        // Check if the item is a gun
        AMyGun* Gun = Cast<AMyGun>(Item);
        if (Gun)
        {
            // Initialize the ammo UI for the gun
            Gun->InitializeAmmoUI();
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PickupItem called with null pointer."));
    }
}

void AMyCharacter::Throw()
{
    if (EquippedItem)
    {
        FVector ThrowDirection = GetActorForwardVector();
        float ThrowForce = 1000.0f;

        UE_LOG(LogTemp, Warning, TEXT("Throwing item with direction: %s, force: %f"), *ThrowDirection.ToString(), ThrowForce);

        UPrimitiveComponent* ItemPrimitiveComponent = Cast<UPrimitiveComponent>(EquippedItem->GetRootComponent());
        if (ItemPrimitiveComponent)
        {
            ItemPrimitiveComponent->SetSimulatePhysics(true);
        }

        // Detach the gun from the character
        EquippedItem->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        EquippedItem = nullptr; // Clear the equipped gun
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No item equipped to throw."));
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

            // Calculate the new position of the item in the arc
            FVector NewItemPosition = CharacterLocation + FVector(FMath::Cos(FMath::DegreesToRadians(ClampedAngle)) * ArcRadius, 0.0f, FMath::Sin(FMath::DegreesToRadians(ClampedAngle)) * ArcRadius);

            if(EquippedItem)
			{
                // Update the item's position
                EquippedItem->SetActorLocation(NewItemPosition);

                // Determine sprite rotation
                if (ClampedAngle > 90.0f || ClampedAngle < -90.0f)
                {
                    // Flip the item to face left
                    EquippedItem->SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
                }
                else
                {
                    // Item faces right (original orientation)
                    EquippedItem->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
                }
			
			}
            
        }
    }
}
