#pragma once
#include "CoreMinimal.h"
#include "IGS_DetectorsTeamSidesHolder.generated.h"

class AIGS_DetectorBase;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_DetectorsTeamSidesHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AIGS_DetectorBase*> Detectors;
    
    FIGS_DetectorsTeamSidesHolder();
};

