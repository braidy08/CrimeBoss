#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_HealEffectData.generated.h"

class UAkAudioEvent;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_HealEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> EffectPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> EffectStartAkAudioEvent;
    
    FIGS_HealEffectData();
};

