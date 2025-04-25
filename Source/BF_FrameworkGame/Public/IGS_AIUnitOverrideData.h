#pragma once
#include "CoreMinimal.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_AIUnitOverrideData.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIUnitOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AIGS_GameCharacterFramework>> Pawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AILoadoutHolder Loadout;
    
    FIGS_AIUnitOverrideData();
};

