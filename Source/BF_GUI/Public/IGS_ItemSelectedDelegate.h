#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemSelectedDelegate.generated.h"

class UIGS_MenuTileWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ItemSelected, UIGS_MenuTileWidget*, Widget);

