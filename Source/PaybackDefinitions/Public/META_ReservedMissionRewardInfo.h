#pragma once
#include "CoreMinimal.h"
#include "EMETA_ReservedMissionRewardType.h"
#include "META_ReservedMissionRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct FMETA_ReservedMissionRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Percentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ReservedMissionRewardType Type;
    
    PAYBACKDEFINITIONS_API FMETA_ReservedMissionRewardInfo();
};

