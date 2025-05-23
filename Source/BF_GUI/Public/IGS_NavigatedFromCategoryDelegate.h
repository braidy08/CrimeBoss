#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "IGS_NavigatedFromCategoryDelegate.generated.h"

class UIGS_MenuItemCategoryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_NavigatedFromCategory, UIGS_MenuItemCategoryWidget*, categoryWidget, EUINavigation, Navigation);

