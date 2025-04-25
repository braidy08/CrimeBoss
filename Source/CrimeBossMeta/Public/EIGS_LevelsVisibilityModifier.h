#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelsVisibilityModifier.generated.h"

UENUM(BlueprintType)
enum class EIGS_LevelsVisibilityModifier : uint8 {
    None,
    HideAllExcept,
    ShowAllExcept,
};

