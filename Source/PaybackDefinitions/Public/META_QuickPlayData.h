#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainDifficulty.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_Heat.h"
#include "EMETA_RespectLvl.h"
#include "IGS_BadgesPerHeat.h"
#include "IGS_MenuCommonData_Base.h"
#include "IGS_ScenarioModifier.h"
#include "IGS_UserDifficulty.h"
#include "META_QuickPlayData.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_QuickPlayData : public UIGS_MenuCommonData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UserDifficulty, FIGS_UserDifficulty> UserDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UserDifficulty, int32> CutoffLevelsForDifficultyWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyLonelyWaitingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyNewClientJoinedWaitingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyFinalWaitingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> RespectLevelsByPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyToPointsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OneStarsPointsGainPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwoStarsPointsGainPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreeStarsPointsGainPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubstractPointsPercentageWhenMissionFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubstractPointsPercentageWhenMissionFailedPerDeadHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubstractPointsPercentageWhenMissionFailedPerDeadCivilian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickplayScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreFor1Star;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreFor2Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreFor3Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainMinusScorePerKilledCivilian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainMinusScorePerReviveUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainMinusScorePerKilledHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Heat, FIGS_BadgesPerHeat> BadgesPerHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ScenarioDifficulty, int32> BadgesDifficultyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ScenarioModifier> BadgesScenarioModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ChainDifficulty, int32> EnemyTiersPerShuffleDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ChainDifficulty, int32> BadgesPerShuffleDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TutorialCharacters;
    
    UMETA_QuickPlayData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayDifficultyWarning(const EIGS_UserDifficulty& inDifficulty, const int32& inLevel) const;
    
    UFUNCTION(BlueprintCallable)
    void GetSpecialTierChance(const EIGS_UserDifficulty inUserDifficulty, const int32 inStormIntensity, bool& outHasOverride, float& outRatio);
    
};

