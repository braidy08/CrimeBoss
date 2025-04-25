#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HeisterCountChanged, bool, PlayerJoined);

