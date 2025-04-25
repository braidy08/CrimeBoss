#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AIControllerHeavyMelee_Base.h"
#include "IGS_AIControllerHeavyMelee_Butcher.generated.h"

class UIGS_MeleeWeaponInventoryObject;

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerHeavyMelee_Butcher : public AIGS_AIControllerHeavyMelee_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SawBrokenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSawBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetUnreachable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MeleeWeaponInventoryObject* SecondaryMeleeWeaponDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MeleeWeaponInventoryObject* SawWieldable;
    
    AIGS_AIControllerHeavyMelee_Butcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void NotifySawBroke();
    
};

