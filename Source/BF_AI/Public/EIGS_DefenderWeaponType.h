#pragma once
#include "CoreMinimal.h"
#include "EIGS_DefenderWeaponType.generated.h"

UENUM(BlueprintType)
enum class EIGS_DefenderWeaponType : uint8 {
    DW_Unknown,
    DW_Melee,
    DW_Secondary,
    DW_Primary,
    DW_Sniper,
};

