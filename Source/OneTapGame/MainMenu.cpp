#include "MainMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UMainMenu::NativeConstruct()
{
    Super::NativeConstruct();

    if (UButton* PlayButton = Cast<UButton>(GetWidgetFromName(TEXT("PlayButton"))))
    {
        PlayButton->OnClicked.AddDynamic(this, &UMainMenu::OnPlayClicked);
    }
}

void UMainMenu::OnPlayClicked()
{
    this->RemoveFromViewport();
    UGameplayStatics::OpenLevel(this, FName("LvlHouse"));
}
