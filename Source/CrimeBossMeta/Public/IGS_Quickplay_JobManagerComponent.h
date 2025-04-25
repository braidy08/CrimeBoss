#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionResult.h"
#include "IGS_Quick_MissionStatistics.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_JobManagerBaseComponent.h"
#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "IGS_Quickplay_JobManagerComponent.generated.h"

class APlayerState;
class UDataTable;
class UIGS_Entitlements;
class UMETA_HordeModeMission;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_JobManagerComponent : public UIGS_JobManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_HordeModeMission*> HordeModeMissions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_Entitlements* m_Entitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_PendingNewJobCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIGS_Quick_MissionStatistics> m_MissionStatistics;
    
public:
    UIGS_Quickplay_JobManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetJobPlayedToMissionStatistics(const FGameplayTag inJobCategoryTag, int32 inPlayCount, bool inSave);
    
    UFUNCTION(BlueprintCallable)
    void SavePendingNewChanges();
    
    UFUNCTION(BlueprintCallable)
    void RemoveJobCategoryFromPendingNew(const FGameplayTag inJobCategoryTag);
    
    UFUNCTION(BlueprintCallable)
    void ProcessMissionResultByMissionSubtype(const FIGS_MissionResult& inResult, APlayerState* inPlayerState, FDateTime inCurrentDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingNew(const FGameplayTag inJobCategoryTag) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_MultiplayerJobCategoryItemRow> GetRecommendedJobsTableRows(const UDataTable* inRecommendedDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_HordeModeMission*> GetRecentHordeModeMissions(int32 inMaxCount, bool inIncludeBest, FGameplayTagContainer inScenariosToFilter) const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetRandomScenarioForQJLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_Quick_MissionStatistics GetMissionStatisticsForCategory(FGameplayTag inJobCategoryTag, bool inExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_HordeModeMission* GetBestHordeModeMission(FGameplayTagContainer inScenariosToFilter) const;
    
    UFUNCTION(BlueprintCallable)
    void AddHordeModeMission(UMETA_HordeModeMission* inHordeModeMission);
    
};

