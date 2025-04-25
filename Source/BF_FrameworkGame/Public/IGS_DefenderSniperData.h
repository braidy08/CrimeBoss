#pragma once
#include "CoreMinimal.h"
#include "IGS_DefenderSniperData.generated.h"

class UIGS_AIPrimaryWeaponDef;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_DefenderSniperData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_AIPrimaryWeaponDef> SniperWeapon;
    
    FIGS_DefenderSniperData();
};

