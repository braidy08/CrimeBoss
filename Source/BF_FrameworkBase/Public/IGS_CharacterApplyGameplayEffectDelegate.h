#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterApplyGameplayEffectDelegate.generated.h"

class UGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CharacterApplyGameplayEffect, TSubclassOf<UGameplayEffect>, inGameplayEffectClass, float, inLevel);

