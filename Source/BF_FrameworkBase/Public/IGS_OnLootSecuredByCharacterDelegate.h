#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnLootSecuredByCharacterDelegate.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InventoryObjectFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnLootSecuredByCharacter, TSubclassOf<UIGS_InventoryObjectFramework>, inInventoryObject, AIGS_GameCharacterFramework*, OwningPawn);

