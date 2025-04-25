#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputCategory.generated.h"

UENUM(BlueprintType)
enum class EIGS_InputCategory : uint8 {
    Unknown,
    MetaMenu,
    BotMenu,
    Gameplay,
};

