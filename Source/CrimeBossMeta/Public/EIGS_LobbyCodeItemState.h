#pragma once
#include "CoreMinimal.h"
#include "EIGS_LobbyCodeItemState.generated.h"

UENUM(BlueprintType)
enum class EIGS_LobbyCodeItemState : uint8 {
    Focused,
    Unfocused,
    Filled,
    Disabled,
};

