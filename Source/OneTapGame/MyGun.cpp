#include "MyGun.h"
#include "MyBullet.h"
#include "MyCharacter.h"
#include "MyAmmoCounter.h"
#include "Kismet/GameplayStatics.h" // For UDataTable

// Sets default values
AMyGun::AMyGun() : Super()
{
    // Initialize the gun sprite component and attach it to the root
    GunSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("GunSprite"));
    GunSprite->SetupAttachment(RootComponent);

    // Set specific properties for GunSprite
    GunSprite->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    GunSprite->SetCollisionProfileName(TEXT("NoCollision"));
    GunSprite->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

    //gun firing animation
    FiringAnimation = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FiringAnimation"));
    FiringAnimation->SetupAttachment(RootComponent);
    FiringAnimation->SetVisibility(false);

    // Initialize gun profile properties (defaults)
    FireRate = 1.0f;
    LastFireTime = 0.0f;

    bIsFiring = false;

    // Initialize current ammo to be zero initially
    CurrentAmmo = 0;

    AmmoCounterWidgetClass = nullptr;
}


void AMyGun::BeginPlay()
{
    Super::BeginPlay();
    SetGunProfile(GunProfileName); 
    ReloadAmmo();

    UpdateAmmoUI(); // Initial update
}

void AMyGun::Fire()
{
    if (!ConsumeAmmo()) 
    {
        UE_LOG(LogTemp, Warning, TEXT("Out of ammo!"));
        StopFiring(); // Ensure firing stops if out of ammo
        return;
    }

    float CurrentTime = GetWorld()->GetTimeSeconds();
    if ((CurrentTime - LastFireTime) < (1.0f / FireRate)) return; // Check fire rate

    UE_LOG(LogTemp, Warning, TEXT("Fire called. Time since last fire: %f, Fire rate interval: %f"), CurrentTime - LastFireTime, 1.0f / FireRate);

    LastFireTime = CurrentTime;

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

        if (FiringAnimation && !FiringAnimation->IsVisible())
        {
            FiringAnimation->SetVisibility(true);
            FiringAnimation->PlayFromStart();
            UE_LOG(LogTemp, Warning, TEXT("FiringAnimation visibility set to: %s"), FiringAnimation->IsVisible() ? TEXT("true") : TEXT("false"));

        }
    }

    if (IsAutomatic && bIsFireButtonHeldDown)
    {
        // Schedule the next shot
        GetWorld()->GetTimerManager().SetTimer(FiringTimerHandle, this, &AMyGun::Fire, 1.0f / FireRate, false);
    }
}



void AMyGun::StartFiring()
{
    if (bIsFireButtonHeldDown) return; // Prevent re-triggering if already firing

    bIsFireButtonHeldDown = true;
    Fire(); // Initial shot

    // Only set up automatic firing for automatic weapons
    if (IsAutomatic)
    {

        if (!GetWorld()->GetTimerManager().IsTimerActive(FiringTimerHandle))
        {
            GetWorld()->GetTimerManager().SetTimer(FiringTimerHandle, this, &AMyGun::Fire, 1.0f / FireRate, true);
            UE_LOG(LogTemp, Warning, TEXT("Timer started for automatic firing."));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Timer was already active when StartFiring was called."));
        }
    }

    // Start the firing animation
    if (FiringAnimation)
    {
        FiringAnimation->PlayFromStart();
    }

    UE_LOG(LogTemp, Warning, TEXT("StartFiring called. bIsFireButtonHeldDown: %s"), bIsFireButtonHeldDown ? TEXT("true") : TEXT("false"));
}



void AMyGun::StopFiring()
{
    if (bIsFireButtonHeldDown)
    {
        bIsFireButtonHeldDown = false;
        GetWorld()->GetTimerManager().ClearTimer(FiringTimerHandle); // Stop the automatic firing
        
        // Hide the firing animation when firing stops
        if (FiringAnimation && FiringAnimation->IsVisible())
        {
            FiringAnimation->SetVisibility(false);
            FiringAnimation->Stop();
            UE_LOG(LogTemp, Warning, TEXT("FiringAnimation visibility set to: %s"), FiringAnimation->IsVisible() ? TEXT("true") : TEXT("false"));

        }
    }
}

void AMyGun::TriggerAction()
{
    if (CurrentAmmo > 0)
    {
        if (IsAutomatic)
        {
            StartFiring();
        }
        else
        {
            Fire();
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Cannot fire - out of ammo!"));
    }
}


void AMyGun::UpdateAmmoUI()
{
    if (AmmoCounterWidget)
    {
        AmmoCounterWidget->SetAmmoCount(CurrentAmmo);
    }
}

void AMyGun::InitializeAmmoUI()
{
    // Create the ammo counter widget when the gun is picked up
    if (!AmmoCounterWidget && AmmoCounterWidgetClass)
    {
        AmmoCounterWidget = CreateWidget<UMyAmmoCounter>(GetWorld(), AmmoCounterWidgetClass);
        if (AmmoCounterWidget)
        {
            AmmoCounterWidget->AddToViewport();
            AmmoCounterWidget->SetAmmoCount(CurrentAmmo);
        }
    }
}


bool AMyGun::ConsumeAmmo()
{
    if (CurrentAmmo > 0)
    {
        --CurrentAmmo;
        UpdateAmmoUI(); // Update UI after consuming ammo
        return true;
    }
    return false;
}

void AMyGun::ReloadAmmo()
{
    CurrentAmmo = CurrentGunProfile.AmmoCapacity;
    LastFireTime = 0.0f; // Reset LastFireTime on reload
    UpdateAmmoUI(); // Update UI after reloading
}

void AMyGun::SetGunProfile(FName ProfileName)
{
    if (GunProfilesDataTable)
    {
        FGunProfile* Profile = GunProfilesDataTable->FindRow<FGunProfile>(ProfileName, TEXT("Context String"));
        if (Profile)
        {
            FireRate = Profile->FireRate;
            IsAutomatic = Profile->IsAutomatic;
            CurrentGunProfile = *Profile; // Set the current gun profile
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Profile not found in DataTable for name: %s"), *ProfileName.ToString());
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GunProfilesDataTable not set in %s"), *GetName());
    }
}