#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "MyItem.generated.h"

UCLASS()
class ONETAPGAME_API AMyItem : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AMyItem();


protected:
    virtual void BeginPlay() override;

public:
    // Item sprite component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPaperSpriteComponent* ItemSprite;

    // Interaction box for picking up the item
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* InteractionBox;

    virtual bool CanBePickedUp() const;


    UFUNCTION()
    virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


    virtual void TriggerAction();


    virtual void OnPickedUp();
};
