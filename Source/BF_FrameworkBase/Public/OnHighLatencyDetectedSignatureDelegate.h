#pragma once
#include "CoreMinimal.h"
#include "EIGS_NetworkMonitorStatus.h"
#include "OnHighLatencyDetectedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHighLatencyDetectedSignature, EIGS_NetworkMonitorStatus, NewState);

