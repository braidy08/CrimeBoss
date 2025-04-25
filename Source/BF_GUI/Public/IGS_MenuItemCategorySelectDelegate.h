#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuItemCategorySelectDelegate.generated.h"

class UIGS_MenuItemCategoryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_MenuItemCategorySelect, UIGS_MenuItemCategoryWidget*, categoryWidget, int32, Direction);

