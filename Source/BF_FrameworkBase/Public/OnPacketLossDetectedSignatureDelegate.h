#pragma once
#include "CoreMinimal.h"
#include "EIGS_NetworkMonitorStatus.h"
#include "OnPacketLossDetectedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPacketLossDetectedSignature, EIGS_NetworkMonitorStatus, NewState);

