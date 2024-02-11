#pragma once


#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

UCLASS()
class ONETAPGAME_API UMainMenu : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;

    // Function to be called when the 'Play' button is clicked
    UFUNCTION(BlueprintCallable, Category = "UI")
    void OnPlayClicked();
};

