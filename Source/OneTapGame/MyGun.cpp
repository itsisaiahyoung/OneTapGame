#include "MyGun.h"
#include "MyBullet.h"
#include "MyCharacter.h"

// Sets default values
AMyGun::AMyGun() : Super()
{
    // Initialize the gun sprite component and attach it to the root
    GunSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("GunSprite"));
    GunSprite->SetupAttachment(RootComponent);

    // Set specific properties for GunSprite
    GunSprite->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GunSprite->SetCollisionProfileName(TEXT("BlockAllDynamic"));
}

// Called when the game starts or when spawned
void AMyGun::BeginPlay()
{
    Super::BeginPlay(); 

}

void AMyGun::Fire()
{
    if (GetWorld())
    {
        FVector Location = GetActorLocation();
        FRotator Rotation = GetActorRotation();

        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = GetInstigator();

        AMyBullet* Bullet = GetWorld()->SpawnActor<AMyBullet>(BulletBlueprint, Location, Rotation, SpawnParams);
        if (Bullet)
        {
            FVector ShootDirection = Rotation.Vector();
            Bullet->FireInDirection(ShootDirection);

            UE_LOG(LogTemp, Warning, TEXT("Gun fired!"));
        }
    }
}

/*
// This function can be removed if the overlap logic is handled in the base class AMyItem
void AMyGun::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // Call base class function to handle common item overlap behavior
    Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

}

*/

void AMyGun::TriggerAction()
{
    // Call the Fire method
    Fire();
}