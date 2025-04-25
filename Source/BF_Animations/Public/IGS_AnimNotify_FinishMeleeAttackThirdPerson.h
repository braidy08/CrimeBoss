#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EIGS_DeathDirection.h"
#include "EIGS_TPP_DeathStates.h"
#include "IGS_AnimNotify_FinishMeleeAttackThirdPerson.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BF_ANIMATIONS_API UIGS_AnimNotify_FinishMeleeAttackThirdPerson : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DeathDirection DeathDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TPP_DeathStates DeathState;
    
    UIGS_AnimNotify_FinishMeleeAttackThirdPerson();

};

