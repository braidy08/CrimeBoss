#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeTraceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MeleeTraceType : uint8 {
    MTT_Point,
    MTT_Sphere,
    MTT_Swing,
};

