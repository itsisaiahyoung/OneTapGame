#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyItem.generated.h"

UCLASS()
class ONETAPGAME_API AMyItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
