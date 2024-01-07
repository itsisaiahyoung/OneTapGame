#include "MyGun.h"
#include "MyBullet.h"
#include "MyCharacter.h"

// Sets default values
AMyGun::AMyGun()
{
    PrimaryActorTick.bCanEverTick = false;

    // Initializes the gun sprite component and attaches it to the root component
    GunSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("GunSprite"));
    RootComponent = GunSprite;

    // Creates a collision box for interaction
    InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
    InteractionBox->SetupAttachment(RootComponent);
    InteractionBox->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f)); // Adjust the size as needed
    InteractionBox->SetCollisionProfileName(TEXT("Trigger"));

    // Register the overlap event
    InteractionBox->OnComponentBeginOverlap.AddDynamic(this, &AMyGun::OnOverlapBegin);

    // gun sprite component
    GunSprite->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GunSprite->SetCollisionProfileName(TEXT("BlockAllDynamic")); // Adjust as needed
}

// Called when the game starts or when spawned
void AMyGun::BeginPlay()
{
    Super::BeginPlay();
}

bool AMyGun::CanBePickedUp() const
{
    return true;
}

void AMyGun::Fire()
{
    if (GetWorld())
    {
        // Location and rotation for the bullet to spawn
        FVector Location = GetActorLocation();
        FRotator Rotation = GetActorRotation();

        // Bullet spawn parameters
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = GetInstigator();

        // Spawn the bullet
        AMyBullet* Bullet = GetWorld()->SpawnActor<AMyBullet>(BulletBlueprint, Location, Rotation, SpawnParams);
        if (Bullet)
        {
            FVector ShootDirection = Rotation.Vector();
            Bullet->FireInDirection(ShootDirection);

            // Add a log here to indicate that the gun has fired
            UE_LOG(LogTemp, Warning, TEXT("Gun fired!"));
        }
    }
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

            SetActorEnableCollision(false);
            // SetActorHiddenInGame(true);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Non-player actor %s triggered overlap."), *OtherActor->GetName());
        }
    }
}