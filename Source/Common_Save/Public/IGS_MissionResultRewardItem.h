#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_MissionResultRewardItem.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_MissionResultRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FIGS_MissionResultRewardItem();
};

