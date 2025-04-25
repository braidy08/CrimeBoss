#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnalyticsGameplayEvents.generated.h"

UENUM(BlueprintType)
enum class EIGS_AnalyticsGameplayEvents : uint8 {
    Error_MonsterCloset_NPC_TeleportedOut,
    Error_MonsterCloset_NPC_StillIn = 1,
    Unknown = 255
};

