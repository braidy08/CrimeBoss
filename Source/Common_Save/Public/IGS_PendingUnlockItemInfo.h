#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_PendingUnlockItemInfo.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_PendingUnlockItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ExtraValue;
    
    FIGS_PendingUnlockItemInfo();
};

