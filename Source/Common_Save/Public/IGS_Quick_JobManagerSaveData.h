#pragma once
#include "CoreMinimal.h"
#include "EIGS_QPModeSource.h"
#include "META_HordeModeMissionSave.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_UserDifficulty.h"
#include "IGS_Quick_MissionStatistics.h"
#include "META_MissionsSave.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_JobManagerSaveData.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_JobManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> CurrentJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_MissionsSave Opportunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EIGS_QPModeSource, EIGS_UserDifficulty> LastSelectedDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_MissionsSave LastPlayedMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGuid> FinishedMissionsIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_HordeModeMissionSave> HordeModeMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bLastPlayedWasChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PendingNewMissionsIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIGS_Quick_MissionStatistics> MissionStatistics;
    
    FIGS_Quick_JobManagerSaveData();
};

