#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "EMETA_PerkStatGroupUsage.h"
#include "EMETA_PerkStatUnit.h"
#include "META_PerkStatGroup.generated.h"

USTRUCT(BlueprintType)
struct FMETA_PerkStatGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayAttribute> PerkAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_PerkStatGroupUsage Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_PerkStatUnit ValueUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomFormat;
    
    PAYBACKDEFINITIONS_API FMETA_PerkStatGroup();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_PerkStatGroup&) { return 0; }
FORCEINLINE bool operator==(const FMETA_PerkStatGroup&, const FMETA_PerkStatGroup&) { return true; }