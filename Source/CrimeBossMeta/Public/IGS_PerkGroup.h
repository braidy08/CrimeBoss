#pragma once
#include "CoreMinimal.h"
#include "IGS_PerkGroup.generated.h"

class UMETA_Perk;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_PerkGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMETA_Perk*> Perks;
    
    FIGS_PerkGroup();
};

