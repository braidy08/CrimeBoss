#pragma once
#include "CoreMinimal.h"
#include "IGS_AIWeaponPoolDef.h"
#include "IGS_HordeModeSideDef.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_HordeModeSideDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AIGS_GameCharacterFramework>> Pawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIWeaponPoolDef Weapons;
    
    FIGS_HordeModeSideDef();
};

