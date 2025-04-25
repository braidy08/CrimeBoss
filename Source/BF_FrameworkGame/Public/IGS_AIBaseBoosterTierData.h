#pragma once
#include "CoreMinimal.h"
#include "IGS_BoostData.h"
#include "IGS_AIBaseBoosterTierData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBaseBoosterTierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BoostData BoostData;
    
    FIGS_AIBaseBoosterTierData();
};

