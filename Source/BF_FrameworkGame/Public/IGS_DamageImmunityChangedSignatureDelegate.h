#pragma once
#include "CoreMinimal.h"
#include "IGS_DamageImmunityChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DamageImmunityChangedSignature, bool, Enabled);

