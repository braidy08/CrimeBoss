#pragma once
#include "CoreMinimal.h"
#include "IGS_BoolChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BoolChangedSignature, bool, InValue);

