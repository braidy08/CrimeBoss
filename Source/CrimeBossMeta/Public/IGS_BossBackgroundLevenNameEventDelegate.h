#pragma once
#include "CoreMinimal.h"
#include "IGS_BossBackgroundLevenNameEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BossBackgroundLevenNameEvent, FName, inLevelName);

