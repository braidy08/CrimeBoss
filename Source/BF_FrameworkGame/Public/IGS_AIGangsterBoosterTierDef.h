#pragma once
#include "CoreMinimal.h"
#include "IGS_AIGangsterBoosterTierData.h"
#include "IGS_AIGangsterTierDef.h"
#include "IGS_AIGangsterBoosterTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterBoosterTierDef : public FIGS_AIGangsterTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterBoosterTierData SpecStats;
    
    FIGS_AIGangsterBoosterTierDef();
};

