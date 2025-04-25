#pragma once
#include "CoreMinimal.h"
#include "IGS_ActiveEquipmentDurationIncreasedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ActiveEquipmentDurationIncreased, float, DurationIncrease);

