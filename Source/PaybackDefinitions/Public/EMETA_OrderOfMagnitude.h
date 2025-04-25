#pragma once
#include "CoreMinimal.h"
#include "EMETA_OrderOfMagnitude.generated.h"

UENUM(BlueprintType)
enum class EMETA_OrderOfMagnitude : uint8 {
    None,
    Thousands,
    Millions,
    Billions,
};

