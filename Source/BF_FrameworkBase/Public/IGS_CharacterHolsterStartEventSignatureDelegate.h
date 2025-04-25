#pragma once
#include "CoreMinimal.h"
#include "IGS_CharacterHolsterStartEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CharacterHolsterStartEventSignature, bool, inIsHolstering, bool, inSkipAnimation);

