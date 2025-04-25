#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_MeleeSettingsDef.h"
#include "IGS_PushForTargetSettingsDef.h"
#include "IGS_CombatSettingsManager.generated.h"

class UIGS_CombatSettings;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_CombatSettingsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_CombatSettings* CombatSettings;
    
    UIGS_CombatSettingsManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_PushForTargetSettingsDef GetPushForTargetSettingsDef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_MeleeSettingsDef GetMeleeSettingsDef() const;
    
};

