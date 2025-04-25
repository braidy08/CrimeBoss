#pragma once
#include "CoreMinimal.h"
#include "EMETA_ReservedMissionRewardType.generated.h"

UENUM(BlueprintType)
enum class EMETA_ReservedMissionRewardType : uint8 {
    None,
    Bonus,
    Objective,
};

