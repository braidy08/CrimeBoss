#pragma once
#include "CoreMinimal.h"
#include "EIGS_SWATVariationType.h"
#include "IGS_AIBaseTeamDef.h"
#include "IGS_AISwatBaseDataDefaults.h"
#include "IGS_AISwatTiersDef.h"
#include "IGS_AIUnitOverrideDef.h"
#include "IGS_AISwatTeamDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatTeamDef : public FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatTiersDef Tiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatBaseDataDefaults DefaultStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_SWATVariationType, FIGS_AIUnitOverrideDef> Variations;
    
    FIGS_AISwatTeamDef();
};

