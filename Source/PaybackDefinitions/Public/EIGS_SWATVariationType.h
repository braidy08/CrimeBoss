#pragma once
#include "CoreMinimal.h"
#include "EIGS_SWATVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SWATVariationType : uint8 {
    US_None,
    US_SWAT,
    US_FPSMinIndex = 10,
    US_FPS_Spetsnaz,
    US_FPSMaxIndex = 128,
    US_Unknown = 255,
};

