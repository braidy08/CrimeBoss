#pragma once
#include "CoreMinimal.h"
#include "IGS_PendingUnlockItemInfo.h"
#include "IGS_UnlockedRewardHistoryItem.h"
#include "IGS_ProgressionSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_ProgressionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ProgressLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ProgressToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PendingUnlockedLevelUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FIGS_PendingUnlockItemInfo> PendingUnlockedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FIGS_UnlockedRewardHistoryItem> UnlockedRewardsHistory;
    
    FIGS_ProgressionSaveData();
};

