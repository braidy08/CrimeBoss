#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_PlotlineUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlotlineUnlocked, FGameplayTag, inTag);

