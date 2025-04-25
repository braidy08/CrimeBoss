#pragma once
#include "CoreMinimal.h"
#include "IGS_OnEquipmentGEAppliedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnEquipmentGEApplied, float, inDuration, float, inStartTime);

