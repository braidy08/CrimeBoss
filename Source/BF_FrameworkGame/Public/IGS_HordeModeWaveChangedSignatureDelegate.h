#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeWaveChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HordeModeWaveChangedSignature, const int32, inWave);

