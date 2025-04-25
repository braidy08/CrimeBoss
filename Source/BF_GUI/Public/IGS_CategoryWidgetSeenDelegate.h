#pragma once
#include "CoreMinimal.h"
#include "IGS_CategoryWidgetSeenDelegate.generated.h"

class UIGS_MenuItemCategoryWidget;
class UIGS_MenuTileWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CategoryWidgetSeen, UIGS_MenuItemCategoryWidget*, categoryWidget, UIGS_MenuTileWidget*, Widget);

