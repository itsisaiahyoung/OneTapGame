// GunProfile.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GunProfile.generated.h"

USTRUCT(BlueprintType)
struct FGunProfile : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
    float FireRate;

    // Add more properties like damage, ammo type, etc.
};
