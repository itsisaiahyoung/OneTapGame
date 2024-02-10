// GunProfile.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GunProfile.generated.h"

USTRUCT(BlueprintType)
struct ONETAPGAME_API FGunProfile : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
    float FireRate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
    bool IsAutomatic;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
    int32 AmmoCapacity;

    // Add more properties like damage, ammo type, etc.
};
