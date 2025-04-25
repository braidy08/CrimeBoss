#pragma once
#include "CoreMinimal.h"
#include "EIGS_BasePlatform.generated.h"

UENUM(BlueprintType)
enum class EIGS_BasePlatform : uint8 {
    None,
    Windows,
    PS5,
    Xbox,
};

