#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.h"
#include "IGS_ChainCharacter.h"
#include "IGS_ChainCrew.h"
#include "IGS_ChainLoadout.h"
#include "IGS_ChainMission.h"
#include "META_CharacterInfo.h"
#include "IGS_MissionResultRewardItem.h"
#include "IGS_Quick_ChainResultsSaveData.h"
#include "IGS_ActiveChainData.h"
#include "IGS_ChainManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quickplay_ChainManagerComponent.generated.h"

class UIGS_ChainContractID;
class UIGS_ChainLoadoutID;
class UMETA_Character;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_ChainManagerComponent : public UIGS_ChainManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_ChainManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool WasCurrentMissionUrbanLegendMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool WasCurrentMissionChainMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldUseChainCrew();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_CharacterInfo> LoadCrewToCharacterInfo(const TArray<UMETA_Character*>& inCharacters, const FIGS_ChainCrew& inChainCrew);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCurrentMissionUrbanLegendMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCurrentMissionChainMission();
    
    UFUNCTION(BlueprintCallable)
    UMETA_Character* InitChainCharacter(const FIGS_ChainCharacter& inChainCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FIGS_Quick_ChainResultsSaveData GetPreviousChainResults(TSubclassOf<UIGS_ChainContractID> ChainID);
    
protected:
    UFUNCTION(BlueprintCallable)
    FIGS_ChainCharacter GetMatchingChainCharacter(const UMETA_Character* inCharacter, const FIGS_ChainCrew& inChainCrew, bool& outSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FIGS_ActiveChainData GetCurrentActiveUrbanLegendData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FIGS_ActiveChainData GetCurrentActiveShuffleData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<UMETA_Character*> GetChainCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FIGS_ChainLoadout GetChainCharacterLoadout(TSubclassOf<UIGS_ChainLoadoutID> inChainLoadoutID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetBonusChainRewardWithMultipliers(const FIGS_ActiveChainData& inChainData, const ECommonMissionResult inResult, const int32 inStarRating, TArray<FIGS_MissionResultRewardItem>& outRewardItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FIGS_ChainMission> GetAllUrbanLegendRows();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FIGS_ChainMission> GetAllShuffleInfoRows();
    
};

