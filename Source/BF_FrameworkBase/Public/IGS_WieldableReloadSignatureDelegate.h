#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableReloadSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_WieldableReloadSignature, bool, inIsCombat, bool, inIsEmptyMagazine);

