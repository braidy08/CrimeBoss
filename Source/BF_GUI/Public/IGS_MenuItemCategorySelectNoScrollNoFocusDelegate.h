#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuItemCategorySelectNoScrollNoFocusDelegate.generated.h"

class UIGS_MenuItemCategoryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MenuItemCategorySelectNoScrollNoFocus, UIGS_MenuItemCategoryWidget*, categoryWidget);

