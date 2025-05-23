#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "IGS_UnlockStatsLevels.h"
#include "IGS_UnlockStatsQualities.generated.h"

USTRUCT(BlueprintType)
struct FIGS_UnlockStatsQualities {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FIGS_UnlockStatsLevels> Qualities;
    
    BF_FRAMEWORKBASE_API FIGS_UnlockStatsQualities();
};

