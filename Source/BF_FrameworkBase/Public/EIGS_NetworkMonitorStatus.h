#pragma once
#include "CoreMinimal.h"
#include "EIGS_NetworkMonitorStatus.generated.h"

UENUM(BlueprintType)
enum class EIGS_NetworkMonitorStatus : uint8 {
    None,
    Warning,
    Severe,
};

