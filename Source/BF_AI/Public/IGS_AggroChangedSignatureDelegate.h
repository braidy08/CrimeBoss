#pragma once
#include "CoreMinimal.h"
#include "IGS_AggroChangedSignatureDelegate.generated.h"

class AActor;
class AIGS_AIControllerBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_AggroChangedSignature, AIGS_AIControllerBase*, inSourceController, AActor*, inAggroTarget);

