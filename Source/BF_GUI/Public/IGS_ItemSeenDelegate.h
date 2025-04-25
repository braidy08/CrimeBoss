#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemSeenDelegate.generated.h"

class UIGS_MenuTileWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ItemSeen, UIGS_MenuTileWidget*, Widget);

