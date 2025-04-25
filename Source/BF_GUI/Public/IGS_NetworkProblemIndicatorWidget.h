#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_NetworkProblemIndicatorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_NetworkProblemIndicatorWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_NetworkProblemIndicatorWidget();

};

