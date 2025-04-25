#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainMission.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "IGS_MultiplayerJobsDatabase.generated.h"

class UDataTable;
class UMETA_BaseFPSMission;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_MultiplayerJobsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_MultiplayerCommonJobsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_MultiplayerHordeJobsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ChainContractsDataTable;
    
public:
    UIGS_MultiplayerJobsDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static FGameplayTagContainer GetScenariosForJob(UObject* inWCO, const FGameplayTag inJobTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static FIGS_MultiplayerJobCategoryRow GetMultiplayerJobCategory(UObject* inWCO, const FGameplayTag inMultiplayerJobCategoryID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static TArray<FIGS_MultiplayerJobCategoryItemRow> GetJobsInCategory(UObject* inWCO, FGameplayTag inCategoryTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static FGameplayTag GetJobCategoryTagFromMissionObject(UObject* inWCO, const UMETA_BaseFPSMission* inMission);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static FIGS_MultiplayerJobCategoryItemRow GetItemRow(UObject* inWCO, const FGameplayTag inItemRowID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static TArray<FIGS_MultiplayerJobCategoryItemRow> GetHordeJobSubCategories(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static TArray<FIGS_MultiplayerJobCategoryRow> GetHordeJobCategories(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static TArray<FIGS_MultiplayerJobCategoryItemRow> GetCommonJobSubCategories(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static TArray<FIGS_MultiplayerJobCategoryRow> GetCommonJobCategories(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static TArray<FIGS_ChainMission> GetChainMissions(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static TArray<FIGS_MultiplayerJobCategoryRow> GetAllCategories(UObject* inWCO);
    
};

