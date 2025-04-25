#pragma once
#include "CoreMinimal.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_Gang.h"
#include "EMETA_RespectLvl.h"
#include "META_CharacterID.h"
#include "META_Interval.h"
#include "IGS_PlayerManagerBaseComponent.h"
#include "META_PlayerInfo.h"
#include "META_PlayerManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_PlayerManagerComponent : public UIGS_PlayerManagerBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMETA_RespectChanged, EMETA_RespectLvl, inNewRespect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMETA_OnRespectChangeSequenceRequested, EMETA_RespectLvl, inFinalRespect, float, inBossPoints);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMETA_OnArmyAmountChanged, int32, inChangedBy, int32, inAvailableSoldiers, int32, inTotalSoldiers);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_RespectChanged OnRespectChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_OnRespectChangeSequenceRequested OnRespectChangeSequenceRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_OnArmyAmountChanged OnArmyAmountChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PlayerInfo PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EMETA_RespectLvl> PendingRespectChanges;
    
public:
    UMETA_PlayerManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateArmyAfterMission(const int32 inSentSoldiers, const int32 inSoldierCasualties);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerArmyTier(const EMETA_ArmyTier inNewTier);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRespectChangeSequence();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPlayerAvailableArmy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRespectPending(const EMETA_RespectLvl inRespect) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRespectInfo(EMETA_RespectLvl& outCurrentRespect, int32& outCurrentTurfs, int32& outMaximumTurfsNeeded, TMap<EMETA_RespectLvl, int32>& outSortedThresholds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_RespectLvl GetPlayerRespectFromTurfCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_PlayerInfo GetPlayerInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ArmyTier GetPlayerArmyTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerArmyAmount(int32& outAvailableSoldiers, int32& outTotalSoldiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_RespectLvl> GetPendingRespectChangesArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumPlayerArmyAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FMETA_Interval GetInitialPlayerTurfCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialPlayerArmyAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossTurfCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMETA_Gang GetBossGang();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CharacterID GetBossCharacterID() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRequestRespectChangeSequence(const EMETA_RespectLvl inFinalRespect, const float inFinalBossPoints);
    
    UFUNCTION(BlueprintCallable)
    void ConsumePendingRespectChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool CheckPendingRespectChanges(EMETA_RespectLvl& outNextRespect, EMETA_RespectLvl& outFinalRespect, float& outRawBossPoints) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayerAvailableArmy(const int32 inSoldiers);
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayerArmy(const int32 inSoldiers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreTherePendingRespectChanges() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPendingRespectChange(const EMETA_RespectLvl inRespect);
    
};

