#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeAttackType.h"
#include "IGS_MeleeAttackSignatureEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MeleeAttackSignatureEvent, EIGS_MeleeAttackType, inAttackType);

