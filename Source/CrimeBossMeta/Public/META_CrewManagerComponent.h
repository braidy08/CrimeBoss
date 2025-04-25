#pragma once
#include "CoreMinimal.h"
#include "IGS_CharacterClasses.h"
#include "IGS_CharacterTableRow.h"
#include "META_HeisterLoadout.h"
#include "META_PerkData.h"
#include "IGS_CharacterMissionProgress.h"
#include "META_RemovedCharacter.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_JobResult.h"
#include "EMETA_RespectLvl.h"
#include "META_CharacterID.h"
#include "IGS_CrewManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_CrewManagerComponent.generated.h"

class AMETA_BaseGameMode;
class UIGS_GameplayEffect_PerkBase;
class UMETA_Character;
class UMETA_MissionID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_CrewManagerComponent : public UIGS_CrewManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_PerkData> LastPromotePerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> CrewHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> HeistersOnJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, float> RecoveryInfoOfHeistersInjures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_RemovedCharacter> RemovedCrewHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, int32> HeistersMoodResetCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EIGS_CharacterID> CharactersRevengePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EIGS_CharacterID> CharactersPriorityRandomPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EIGS_CharacterID> CharactersNormalRandomPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EIGS_CharacterID> UnlockedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainAmountOfCompletedMissionsBeforeUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, int32> RemainAmountOfDaysForHealingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, int32> CounterOfDeathPreventingUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_CharacterClasses> ActiveGenericVariants;
    
public:
    UMETA_CrewManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCharacterPlotlineCompleted(FGameplayTag inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    EIGS_CharacterID SelectCharacterForGenerationFromPool(const TArray<EIGS_CharacterID>& inCharacterPool) const;
    
    UFUNCTION(BlueprintCallable)
    void SaveCharacterMissionStatus(FGameplayTag inCharacter, TSubclassOf<UMETA_MissionID> inMissionID, EMETA_JobResult inResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality SanitizeGenericHeisterQuality(EMETA_ItemQuality inRequiredQuality) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterPlotlineProgressForCharacter(FGameplayTag inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ResetActiveGenericVariants();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCharacterFromCampaign(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Character* MorphUniqueCharacter(UMETA_Character* inOriginalCharacter, const FGameplayTag inNewCharacter, const bool inForceIgnoreLock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeisterRemovedFromCampaign(EIGS_CharacterID inCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeisterExcludedFromCampaign(FGameplayTag inCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterPlotlineCompleted(FGameplayTag inCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterMutuallyExclusiveWithActiveCharacterByTagID(FGameplayTag inCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterMutuallyExclusiveWithActiveCharacter(const FIGS_CharacterTableRow& inCharacterData, FGameplayTag inCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterFromEntitledDLC(FGameplayTag inCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EIGS_CharacterID> GetUniqueCharactersAvailableForGeneration() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Character*> GetEntitledCharactersToBeAddedForTheFirstTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterMissionProgressForCharacter(FGameplayTag inCharacter, bool& outFound, FIGS_CharacterMissionProgress& outMissionProgress) const;
    
    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateUniqueCharacterByTagID(FGameplayTag inCharacterTagID, bool inIsTemporary, bool inForceIgnoreLock);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateUniqueCharacterByID(EIGS_CharacterID inCharacterID, bool inIsTemporary, bool inForceIgnoreLock);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateGenericCharacterByPlayerRespect(EMETA_RespectLvl inRespect, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, const TArray<EIGS_CharacterID>& inForbiddenCharacterIDs, EMETA_ItemQuality inWeaponQualityOverride, EMETA_ItemQuality inEquipmentQualityOverride);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateGenericCharacterByID(EIGS_CharacterID inCharacterID, EMETA_ItemQuality inHeisterQuality, const int32 inUniqueGenericID, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, EMETA_ItemQuality inWeaponQualityOverride, EMETA_ItemQuality inEquipmentQualityOverride);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateGenericCharacter(EMETA_ItemQuality inHeisterQuality, const TArray<UMETA_Character*>& inCurrentlyGeneratedCharacters, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, const TArray<EIGS_CharacterID>& inForbiddenCharacterIDs, EMETA_ItemQuality inWeaponQualityOverride, EMETA_ItemQuality inEquipmentQualityOverride);
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeisterLoadout CreateBossLoadout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUniqueCharacterBeGenerated(FGameplayTag inCharacterID, const AMETA_BaseGameMode* inMetaGameMode, const TArray<UMETA_Character*>& inBlackmarketCharactersPool) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Character*> CalculateStartingHeistersBonus();
    
};

