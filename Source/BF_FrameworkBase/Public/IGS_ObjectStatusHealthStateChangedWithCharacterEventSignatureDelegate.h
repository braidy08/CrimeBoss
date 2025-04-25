#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_ObjectStatusHealthStateChangedWithCharacterEventSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ObjectStatusHealthStateChangedWithCharacterEventSignature, EIGS_HealthState, HealthState, AIGS_GameCharacterFramework*, Character);

