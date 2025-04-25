#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_QualityDistribution.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_QualityDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
    FMETA_QualityDistribution();
};

