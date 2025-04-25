#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_AIUnitOverrideData.h"
#include "IGS_AIUnitOverrideDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIUnitOverrideDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIUnitOverrideData GlobalOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnitSpecialization, FIGS_AIUnitOverrideData> SpecOverrides;
    
    FIGS_AIUnitOverrideDef();
};

