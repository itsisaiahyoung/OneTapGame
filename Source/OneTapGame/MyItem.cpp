#include "MyItem.h"

// Sets default values
AMyItem::AMyItem()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Initialize components here, e.g., a mesh component for the item's visual representation
}

// Called when the game starts or when spawned
void AMyItem::BeginPlay()
{
    Super::BeginPlay();

    // Initialization code for the item
}

// Called every frame
void AMyItem::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Add any per-frame logic here
}
