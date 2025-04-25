#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelCategory.generated.h"

UENUM(BlueprintType)
enum class EIGS_LevelCategory : uint8 {
    None,
    BossBackground,
    MainMenuBackground,
    Debrief,
    OfficeTier,
};

