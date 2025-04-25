#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableIsAimingSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WieldableIsAimingSignature, bool, inIsAiming);

