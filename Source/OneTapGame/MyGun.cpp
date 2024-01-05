#include "MyGun.h"
#include "MyCharacter.h" // Include your character header

// Sets default values
AMyGun::AMyGun()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    // Initialize the gun sprite component and attach it to the root component
    GunSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("GunSprite"));
    RootComponent = GunSprite;

    // Create a collision box for interaction
    InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
    InteractionBox->SetupAttachment(RootComponent);
    InteractionBox->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f)); // Adjust the size as needed
    InteractionBox->SetCollisionProfileName(TEXT("Trigger"));

    // Register the overlap event
    InteractionBox->OnComponentBeginOverlap.AddDynamic(this, &AMyGun::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AMyGun::BeginPlay()
{
    Super::BeginPlay();
}

bool AMyGun::CanBePickedUp() const
{
    // Implement logic to determine if the gun can be picked up.
    return true; // For now, let's assume it can always be picked up.
}

void AMyGun::Fire()
{
    // Firing logic goes here
    // This could include instantiating bullet actors, playing sound effects, animations, etc.
}

void AMyGun::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    UE_LOG(LogTemp, Warning, TEXT("Overlap with %s"), *OtherActor->GetName());

    if (CanBePickedUp() && OtherActor)
    {
        AMyCharacter* PlayerCharacter = Cast<AMyCharacter>(OtherActor);
        if (PlayerCharacter)
        {
            UE_LOG(LogTemp, Warning, TEXT("Player %s is attempting to pick up the gun."), *PlayerCharacter->GetName());

            // Logic to handle the gun being picked up by the player
            PlayerCharacter->EquipGun(this);

            // Optionally, disable collision and hide the gun in the world
            SetActorEnableCollision(false);
            // SetActorHiddenInGame(true);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Non-player actor %s triggered overlap."), *OtherActor->GetName());
        }
    }
}