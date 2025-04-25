#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_MeleeSettingsDef.h"
#include "IGS_PushForTargetSettingsDef.h"
#include "IGS_CombatSettings.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_CombatSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PushForTargetSettingsDef PushForTargetSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MeleeSettingsDef MeleeSettings;
    
public:
    UIGS_CombatSettings();

};

