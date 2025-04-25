#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "IGS_GameplayAbilityEquipmentBase.generated.h"

class APawn;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_GameplayAbilityEquipmentBase : public UGameplayAbility {
    GENERATED_BODY()
public:
    UIGS_GameplayAbilityEquipmentBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquipmentAdded(APawn* inOwningCharacter);
    
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentAdded(APawn* inOwningCharacter);
    
};

