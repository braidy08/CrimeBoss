#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_CrewManagerBaseComponent.h"
#include "IGS_Quickplay_CrewManagerComponent.generated.h"

class UMETA_BossCharacter;
class UMETA_Character;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_CrewManagerComponent : public UIGS_CrewManagerBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSelectedBossCharacterChanged, int32, inIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_OnBossItemsChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnBossItemsChanged OnBossItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSelectedBossCharacterChanged OnSelectedBossCharacterChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BossCharacter*> BossCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedBossCharacterIndex;
    
public:
    UIGS_Quickplay_CrewManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBossPerk(UMETA_BossCharacter* inBossCharacter, int32 inSlot, FGameplayTag inPerk);
    
    UFUNCTION(BlueprintCallable)
    void SetBossItem(UMETA_BossCharacter* inBossCharacter, FGameplayTag inItemTag, bool inNotify);
    
    UFUNCTION(BlueprintCallable)
    void SelectBossCharacterByTag(FGameplayTag inBossID);
    
    UFUNCTION(BlueprintCallable)
    void SelectBossCharacter(int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCharacter(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBossItem(UMETA_BossCharacter* inBossCharacter, FGameplayTag inItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterOwned(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFreeBossSlots();
    
    UFUNCTION(BlueprintCallable)
    void InitializeExistingBossCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMaxBossSlotsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBossItemEquipped(const UMETA_BossCharacter* inBossCharacter, FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_BossCharacter* GetSelectedBossCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnedBossSlotsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextBossSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBossSlotsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Character*> GetCharactersAndBosses();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Character*> GetCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Character* GetCharacter(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_BossCharacter*> GetBossCharacters();
    
protected:
    UFUNCTION(BlueprintCallable)
    UMETA_BossCharacter* CreateNewBossCharacter(int32 inNumber);
    
public:
    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateCharacter(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable)
    void ChooseBossRandomLoadout(UMETA_BossCharacter* inBossCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddNewBossCharacter(UMETA_BossCharacter* inBossCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCharacters(FGameplayTagContainer inCharacterTags);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacter(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable)
    void AddBossCharacters(TArray<UMETA_BossCharacter*> inBossCharacters);
    
};

