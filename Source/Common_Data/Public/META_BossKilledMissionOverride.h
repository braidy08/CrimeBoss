#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "META_BossKilledMissionOverride.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BossKilledMissionOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum KilledByTeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_GangsterVariationType KilledByVariantID;
    
    FMETA_BossKilledMissionOverride();
};

