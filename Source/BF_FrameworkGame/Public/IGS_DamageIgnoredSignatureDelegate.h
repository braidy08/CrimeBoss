#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_DamageIgnoredSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DamageIgnoredSignature, const FIGS_HitInfo&, HitInfo);

