#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/WidgetSwitcher.h"
#include "MainMenu.generated.h"

UCLASS()
class ONETAPGAME_API UMainMenu : public UUserWidget
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UWidgetSwitcher* MyWidgetSwitcher;

    UPROPERTY(meta = (BindWidget))
    UButton* PlayButton;

    UPROPERTY(meta = (BindWidget))
    UButton* MapButton1; // Assuming you have a button for a specific map

    UFUNCTION()
    void OnPlayClicked();

    UFUNCTION()
    void OnMap1Clicked();
};
