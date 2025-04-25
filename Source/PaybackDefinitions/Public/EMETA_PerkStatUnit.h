#pragma once
#include "CoreMinimal.h"
#include "EMETA_PerkStatUnit.generated.h"

UENUM(BlueprintType)
enum class EMETA_PerkStatUnit : uint8 {
    None,
    Custom,
    Plus,
    Percentage,
    Metres,
    Seconds,
};

