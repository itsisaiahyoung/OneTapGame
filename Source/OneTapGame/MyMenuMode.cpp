#include "MyMenuMode.h"
#include "MainMenu.h"
#include "Blueprint/UserWidget.h"

AMyMenuMode::AMyMenuMode()
{
    // Constructor logic here (if needed)
}

void AMyMenuMode::BeginPlay()
{
    Super::BeginPlay();

    // Load the MainMenuWidget class
    TSubclassOf<UUserWidget> MainMenuClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Menu/MainMenuWidget.MainMenuWidget_C"));
    if (MainMenuClass)
    {
        // Create an instance of the MainMenuWidget
        UMainMenu* MainMenu = CreateWidget<UMainMenu>(GetWorld(), MainMenuClass);
        if (MainMenu)
        {
            // Add the MainMenuWidget to the game's viewport
            MainMenu->AddToViewport();
        }
    } 
    else
    {
		// Log an error if the MainMenuWidget class was not found
		UE_LOG(LogTemp, Error, TEXT("MainMenuWidget class not found"));
	}
}
