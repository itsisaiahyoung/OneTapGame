#include "MyGameMode.h"
#include "MainMenu.h"
#include "Blueprint/UserWidget.h"

AMyGameMode::AMyGameMode()
{

}

void AMyGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Create and add the main menu to the viewport
    if (TSubclassOf<UUserWidget> MainMenuClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Menu/MainMenuWidget.MainMenuWidget_C")))
    {
        UMainMenu* MainMenu = CreateWidget<UMainMenu>(GetWorld(), MainMenuClass);
        if (MainMenu)
        {
            MainMenu->AddToViewport();
        }
    }
}
