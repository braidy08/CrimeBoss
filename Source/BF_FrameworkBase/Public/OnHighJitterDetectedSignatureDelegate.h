#pragma once
#include "CoreMinimal.h"
#include "EIGS_NetworkMonitorStatus.h"
#include "OnHighJitterDetectedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHighJitterDetectedSignature, EIGS_NetworkMonitorStatus, NewState);

