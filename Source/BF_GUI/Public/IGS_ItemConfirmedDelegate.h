#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemConfirmedDelegate.generated.h"

class UIGS_MenuTileWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ItemConfirmed, UIGS_MenuTileWidget*, Widget);

