#include "MainMenu.h"
#include "Components/WidgetSwitcher.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UMainMenu::NativeConstruct()
{
    Super::NativeConstruct();

    if (PlayButton)
    {
        PlayButton->OnClicked.AddDynamic(this, &UMainMenu::OnPlayClicked);
    }

    if (MapButton1)
    {
        MapButton1->OnClicked.AddDynamic(this, &UMainMenu::OnMap1Clicked);
    }
}

void UMainMenu::OnPlayClicked()
{
    if (MyWidgetSwitcher)
    {
        // Assuming the MapSelection screen is the second widget (index 1)
        MyWidgetSwitcher->SetActiveWidgetIndex(1);
    }
}

void UMainMenu::OnMap1Clicked()
{
    // Load the level associated with Map1
    UGameplayStatics::OpenLevel(this, FName("LvlHouse"));
    // Consider removing the widget from the viewport if it's not needed anymore
    this->RemoveFromViewport();
}
