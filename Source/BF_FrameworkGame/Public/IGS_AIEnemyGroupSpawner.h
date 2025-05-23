#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayTagAssetInterfaceCustom.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "IGS_OnAllCharactersDeathSignatureDelegate.h"
#include "IGS_OnCharacterDeathSignatureDelegate.h"
#include "IGS_OnCharactersSpawnedSignatureDelegate.h"
#include "IGS_OnNumberOfCharactersDeathSignatureDelegate.h"
#include "IGS_AIEnemyGroupSpawner.generated.h"

class AIGS_AISpawnPoint;
class UIGS_AISpawnerData;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_AIEnemyGroupSpawner : public AActor, public IIGS_GameplayTagAssetInterfaceCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterDeathSignature OnCharacterDeath;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharactersSpawnedSignature OnCharactersSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnAllCharactersDeathSignature OnAllCharactersDeath;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnNumberOfCharactersDeathSignature OnNumberOfCharactersDeath;
    
    UPROPERTY(BlueprintReadWrite)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite)
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AllowedSpecialTypes;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite)
    bool AutomaticStart;
    
    UPROPERTY(BlueprintReadWrite)
    float AutomaticStartDelay;
    
    UPROPERTY(BlueprintReadWrite)
    bool ChooseRandomPointEveryTime;
    
    UPROPERTY(BlueprintReadWrite)
    bool ChooseRandomPointIfOverflow;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Random;
    
    UPROPERTY(BlueprintReadWrite)
    FInt32Range EasyAmount;
    
    UPROPERTY(BlueprintReadWrite)
    FInt32Range MediumAmount;
    
    UPROPERTY(BlueprintReadWrite)
    FInt32Range HardAmount;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDifficultyMigrated;
    
    UPROPERTY(BlueprintReadWrite)
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite)
    float LastUsedTimestamp;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<AIGS_AISpawnPoint*> AISpawnPoints;
    
    UPROPERTY(BlueprintReadWrite)
    UIGS_AISpawnerData* AISpawnerData;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer GameplayTags;
    
public:
    AIGS_AIEnemyGroupSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnGroupParametrizedWithSpecializations(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, const TArray<EIGS_UnitSpecialization>& inUnitSpecializations);
    
    UFUNCTION(BlueprintCallable)
    void SpawnGroupParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnGroup();
    
    UFUNCTION(BlueprintCallable)
    void OverwriteSpawnAmount(const int32 inEasyMin, const int32 inEasyMax, const int32 inMediumMin, const int32 inMediumMax, const int32 inHardMin, const int32 inHardMax);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);

    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer & TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);

    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer & TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);

    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer & TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags, );

    // Fix for true pure virtual functions not being implemented
};

