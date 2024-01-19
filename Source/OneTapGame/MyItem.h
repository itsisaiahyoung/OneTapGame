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
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Item sprite component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UPaperSpriteComponent* ItemSprite;

    // Interaction box for picking up the item
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* InteractionBox;

    // Method to check if the item can be picked up
    virtual bool CanBePickedUp() const;

    // Overlap event handler
    UFUNCTION()
    virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    // General action method
    virtual void TriggerAction();
};
