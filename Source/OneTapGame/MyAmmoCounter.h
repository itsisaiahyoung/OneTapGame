#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyAmmoCounter.generated.h"

UCLASS()
class ONETAPGAME_API UMyAmmoCounter : public UUserWidget
{
    GENERATED_BODY()

public:
    // Function to update the ammo count display
    UFUNCTION(BlueprintImplementableEvent, Category = "Ammo")
    void SetAmmoCount(int32 AmmoCount);
};
