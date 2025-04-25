#pragma once
#include "CoreMinimal.h"
#include "IGS_GenericBoolEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_GenericBoolEventSignature, bool, inIsTrue);

