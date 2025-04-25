#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_CharacterGenerationWeight.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CharacterGenerationWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Characters;
    
    FMETA_CharacterGenerationWeight();
};

