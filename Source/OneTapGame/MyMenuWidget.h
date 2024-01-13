#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "MyMenuWidget.generated.h"

UCLASS()
class ONETAPGAME_API UMyMenuWidget : public UUserWidget
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

private:
    UFUNCTION()
    void OnButton1Hovered();
    UFUNCTION()
    void OnButton2Hovered();

    UPROPERTY(meta = (BindWidget))
    UButton* MyButton1;
    UPROPERTY(meta = (BindWidget))
    UButton* MyButton2;

    UPROPERTY(meta = (BindWidget))
    UImage* MyImage;

    UTexture2D* ImageForButton1;
    UTexture2D* ImageForButton2;
};
