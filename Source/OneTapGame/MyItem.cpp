#include "MyItem.h"
#include "MyCharacter.h"
#include "PaperSpriteComponent.h"

AMyItem::AMyItem()
{
    PrimaryActorTick.bCanEverTick = false;

    // Initialize the sprite component and attach it to the root
    ItemSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ItemSprite"));
    RootComponent = ItemSprite;

    // Create and set up the interaction box
    InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
    InteractionBox->SetupAttachment(RootComponent);
    InteractionBox->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));
    InteractionBox->SetCollisionProfileName(TEXT("Trigger"));
    InteractionBox->OnComponentBeginOverlap.AddDynamic(this, &AMyItem::OnOverlapBegin);

    ItemSprite->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);


}

void AMyItem::BeginPlay()
{
    Super::BeginPlay();
}

bool AMyItem::CanBePickedUp() const
{
    return true; 
}

void AMyItem::OnPickedUp()
{
    SetActorEnableCollision(false);

}


void AMyItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    UE_LOG(LogTemp, Warning, TEXT("Overlap with %s"), *OtherActor->GetName());

    if (CanBePickedUp() && OtherActor)
    {
        AMyCharacter* PlayerCharacter = Cast<AMyCharacter>(OtherActor);
        if (PlayerCharacter)
        {
            UE_LOG(LogTemp, Warning, TEXT("Player %s is attempting to pick up an item."), *PlayerCharacter->GetName());
            PlayerCharacter->PickupItem(this);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Non-player actor %s triggered overlap."), *OtherActor->GetName());
        }
    }
}

void AMyItem::TriggerAction()
{
  
}
