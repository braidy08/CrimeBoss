#pragma once
#include "CoreMinimal.h"
#include "META_FloatInterval.h"
#include "META_Interval.h"
#include "IGS_MultiplayerMoneyRewardSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_MultiplayerMoneyRewardSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval ScoreRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScoreConversionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval RewardMultiplierRange;
    
    FIGS_MultiplayerMoneyRewardSettings();
};

