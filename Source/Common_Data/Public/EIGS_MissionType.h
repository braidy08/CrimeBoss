#pragma once
#include "CoreMinimal.h"
#include "EIGS_MissionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MissionType : uint8 {
    MT_UNKNOWN = 255,
    MT_Default = 0,
    MT_TurfWar,
    MT_HordeMode,
};

