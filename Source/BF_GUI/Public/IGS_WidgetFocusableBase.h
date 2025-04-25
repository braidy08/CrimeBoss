#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetFocusableBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetFocusableBase : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetFocusableBase();

};

