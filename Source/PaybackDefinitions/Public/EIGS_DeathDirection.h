#pragma once
#include "CoreMinimal.h"
#include "EIGS_DeathDirection.generated.h"

UENUM(BlueprintType)
enum class EIGS_DeathDirection : uint8 {
    DD_Default,
    DD_Right,
    DD_Left,
    DD_Up,
};

