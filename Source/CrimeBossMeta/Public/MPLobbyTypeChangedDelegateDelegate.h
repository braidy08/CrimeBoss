#pragma once
#include "CoreMinimal.h"
#include "EIGS_MPLobbyType.h"
#include "MPLobbyTypeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMPLobbyTypeChangedDelegate, EIGS_MPLobbyType, inLobbyType);

