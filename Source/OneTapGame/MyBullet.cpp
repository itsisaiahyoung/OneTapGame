#include "MyBullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TimerManager.h"

// Sets default values
AMyBullet::AMyBullet()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create the bullet movement component
    BulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BulletMovement"));
    BulletMovement->SetUpdatedComponent(RootComponent);
    BulletMovement->InitialSpeed = 3000.0f;
    BulletMovement->MaxSpeed = 3000.0f;
    BulletMovement->bRotationFollowsVelocity = true;

}

// Called when the game starts or when spawned
void AMyBullet::BeginPlay()
{
    Super::BeginPlay();

    // Use BulletLifespan as the delay
    if (BulletLifespan > 0)
    {
        GetWorld()->GetTimerManager().SetTimer(TimerHandle_AutomaticDespawn, this, &AMyBullet::DespawnBullet, BulletLifespan, false);
    }
}

// Called every frame
void AMyBullet::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMyBullet::FireInDirection(const FVector& ShootDirection)
{
    // Set the initial velocity
    if (BulletMovement)
    {
        BulletMovement->Velocity = ShootDirection * BulletMovement->InitialSpeed;
    }
}

void AMyBullet::DespawnBullet()
{
    // Destroy the bullet
    Destroy();

    // Clear the timer handle
    GetWorld()->GetTimerManager().ClearTimer(TimerHandle_AutomaticDespawn);
}
