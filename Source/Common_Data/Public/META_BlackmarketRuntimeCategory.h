#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BlackmarketCategory.h"
#include "META_BlackmarketRuntimeCategory.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BlackmarketRuntimeCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BlackmarketCategory Configuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> CalculatedPriorities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SelectedItems;
    
    FMETA_BlackmarketRuntimeCategory();
};

