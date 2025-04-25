#pragma once
#include "CoreMinimal.h"
#include "IGS_OnDelayedReviveFinishedDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnDelayedReviveFinished, AIGS_GameCharacterFramework*, inCharacter);

