#pragma once
#include "CoreMinimal.h"
#include "EIGS_EventItemBehavior.generated.h"

UENUM(BlueprintType)
enum class EIGS_EventItemBehavior : uint8 {
    Locked,
    Unlockable,
    Unlock,
    UnlockAndClaim,
};

