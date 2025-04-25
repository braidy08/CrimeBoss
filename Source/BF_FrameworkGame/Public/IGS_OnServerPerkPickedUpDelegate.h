#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerPerkPickedUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerPerkPickedUp, UClass*, inClass);

