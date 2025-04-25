#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_BlackmarketCategory.h"
#include "META_BlackmarketPriorityModifiers.h"
#include "META_QualityDistribution.h"
#include "META_BlackmarketDistribution.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BlackmarketDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval TotalItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FMETA_QualityDistribution> QualityDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_BlackmarketCategory> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BlackmarketPriorityModifiers AdditionalPriorities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FMETA_QualityDistribution> WeaponSkinChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWeaponSkinLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponSkinLimit;
    
    FMETA_BlackmarketDistribution();
};

