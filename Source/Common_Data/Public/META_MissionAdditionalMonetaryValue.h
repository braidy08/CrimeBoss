#pragma once
#include "CoreMinimal.h"
#include "META_ReservedMissionRewardInfo.h"
#include "META_MissionAdditionalMonetaryValue.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MissionAdditionalMonetaryValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardMultiplierFor1stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardMultiplierFor2ndStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardMultiplierFor3rdStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveValueConvertedToMoneyInPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseObjectiveValueOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectiveMonetaryValueInPercentOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootFromSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_ReservedMissionRewardInfo ReservedMissionRewardInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMonetaryValueMultiplier;
    
    FMETA_MissionAdditionalMonetaryValue();
};

