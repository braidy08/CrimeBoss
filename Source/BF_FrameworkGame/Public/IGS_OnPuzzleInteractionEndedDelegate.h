#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPuzzleInteractionEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnPuzzleInteractionEnded, bool, inResult);

