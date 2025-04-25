#pragma once
#include "CoreMinimal.h"
#include "EIGS_PushForTarget.h"
#include "IGS_PushForTargetSettingsDef.generated.h"

USTRUCT(BlueprintType)
struct FIGS_PushForTargetSettingsDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EIGS_PushForTarget, float> CombatRangeReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_PushForTarget AfterControlIntensity;
    
    BF_FRAMEWORKGAME_API FIGS_PushForTargetSettingsDef();
};

