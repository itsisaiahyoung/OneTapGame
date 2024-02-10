// MyGun.h
#pragma once

#include "CoreMinimal.h"
#include "MyItem.h"
#include "MyBullet.h"
#include "GunProfile.h"
#include "PaperFlipbookComponent.h"
#include "MyAmmoCounter.h"
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

    // Reference to the AmmoCounterWidget
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
    UMyAmmoCounter* AmmoCounterWidget;

    // Class of the AmmoCounterWidget, set this in the editor
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UMyAmmoCounter> AmmoCounterWidgetClass;

    void UpdateAmmoUI();

public:
    // Gun sprite component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPaperSpriteComponent* GunSprite;

    // Bullet blueprint
    UPROPERTY(EditDefaultsOnly, Category = "Projectile")
    TSubclassOf<AMyBullet> BulletBlueprint;

    void Fire();

    virtual void TriggerAction() override;

    // Reference to the Data Table
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
    UDataTable* GunProfilesDataTable;

    // Name of the DataRow in the DataTable
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
    FName GunProfileName;

    // Indicates whether the fire button is currently being held down
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gun")
    bool bIsFireButtonHeldDown;

    // Gun firing animation
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPaperFlipbookComponent* FiringAnimation;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gun")
    bool IsAutomatic;

    void StartFiring();

    void StopFiring();

    bool ConsumeAmmo();

    void ReloadAmmo();

    void InitializeAmmoUI();

    // Get current ammo (for UI update)
    int32 GetCurrentAmmo() const { return CurrentAmmo; }

private:
    // Fire rate of the gun
    float FireRate;

    // Timestamp of the last time the gun fired
    float LastFireTime;

    // Method to set the gun properties based on the profile
    void SetGunProfile(FName ProfileName);

    FGunProfile CurrentGunProfile;

    bool bIsFiring;

    int32 CurrentAmmo;

    FTimerHandle FiringTimerHandle;

};
