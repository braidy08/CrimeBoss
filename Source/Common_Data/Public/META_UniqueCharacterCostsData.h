#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "META_Interval.h"
#include "META_UniqueCharacterCostsData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_UniqueCharacterCostsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_Interval> BaseHireCostRangePerCharacterQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, float> HireCostMultiplierPerRespect;
    
    FMETA_UniqueCharacterCostsData();
};

