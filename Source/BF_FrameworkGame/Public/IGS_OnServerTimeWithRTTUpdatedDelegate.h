#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerTimeWithRTTUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnServerTimeWithRTTUpdated, float, inServerTimeDeltaWithRTT, float, inRoundTripTime);

