#include "MyMenuWidget.h"
#include "SlateCore.h"
#include "Slate/SlateBrushAsset.h"
#include "Engine/Texture2D.h"

void UMyMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Load textures (Replace with your asset paths)
    ImageForButton1 = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Assets/Textures/Menu1.Menu1"));
    ImageForButton2 = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Assets/Textures/Menu2.Menu2"));

    if (MyButton1)
    {
        MyButton1->OnHovered.AddDynamic(this, &UMyMenuWidget::OnButton1Hovered);
    }
    if (MyButton2)
    {
        MyButton2->OnHovered.AddDynamic(this, &UMyMenuWidget::OnButton2Hovered);
    }
}

void UMyMenuWidget::OnButton1Hovered()
{
    if (MyImage && ImageForButton1)
    {
        FSlateBrush Brush;
        Brush.SetResourceObject(ImageForButton1);
        MyImage->SetBrush(Brush);
    }
}

void UMyMenuWidget::OnButton2Hovered()
{
    if (MyImage && ImageForButton2)
    {
        FSlateBrush Brush;
        Brush.SetResourceObject(ImageForButton2);
        MyImage->SetBrush(Brush);
    }
}
