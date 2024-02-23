#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyMenuMode.generated.h"

UCLASS()
class ONETAPGAME_API AMyMenuMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AMyMenuMode();

    virtual void BeginPlay() override;
};
