#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBullet.generated.h"

UCLASS()
class ONETAPGAME_API AMyBullet : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AMyBullet();
private:
    	// Timer handle for despawning the bullet
	FTimerHandle TimerHandle_AutomaticDespawn;
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Bullet movement component
    UPROPERTY(VisibleAnywhere, Category = "Movement")
    class UProjectileMovementComponent* BulletMovement;

    // Function to initialize the bullet's velocity in the shoot direction
    void FireInDirection(const FVector& ShootDirection);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bullet")
    float BulletLifespan = 5.0f; // Adjust the time in seconds as needed

    // Function to despawn the bullet
    UFUNCTION()
    void DespawnBullet();
};
