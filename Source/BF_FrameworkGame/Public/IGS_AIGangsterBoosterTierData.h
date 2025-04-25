#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseBoosterTierData.h"
#include "IGS_DefenderAntiPushData.h"
#include "IGS_DefenderSniperData.h"
#include "IGS_FrenzyBoostData.h"
#include "IGS_AIGangsterBoosterTierData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterBoosterTierData : public FIGS_AIBaseBoosterTierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FrenzyBoostData FrenzyStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DefenderAntiPushData AntiPushData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DefenderSniperData SniperData;
    
    FIGS_AIGangsterBoosterTierData();
};

