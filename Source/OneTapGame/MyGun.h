#pragma once

#include "CoreMinimal.h"
#include "MyItem.h" // Include the MyItem header
#include "MyBullet.h"
#include "GunProfile.h"
#include "MyGun.generated.h"

UCLASS()
class ONETAPGAME_API AMyGun : public AMyItem
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

    // Bullet blueprint
    UPROPERTY(EditDefaultsOnly, Category = "Projectile")
    TSubclassOf<AMyBullet> BulletBlueprint;

    /*// Override the CanBePickedUp method if necessary
    virtual bool CanBePickedUp() const override;*/

    void Fire();

    virtual void TriggerAction() override; // Override the action method
};
