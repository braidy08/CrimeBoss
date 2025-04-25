#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_TimedEffect.generated.h"

USTRUCT(BlueprintType)
struct FMETA_TimedEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentualChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    PAYBACKDEFINITIONS_API FMETA_TimedEffect();
};

