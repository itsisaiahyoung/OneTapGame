#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "MyGun.generated.h"

UCLASS()
class ONETAPGAME_API AMyGun : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AMyGun();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Gun sprite component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPaperSpriteComponent* GunSprite;

    // Interaction box for picking up the gun
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* InteractionBox;

    // Method to check if the gun can be picked up
    bool CanBePickedUp() const;

    // Implement the Fire method
    void Fire();

    // Overlap event handler
    UFUNCTION()
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
