#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_MetaCutsceneResults.h"
#include "EIGS_LevelVisibility.h"
#include "EIGS_LevelsVisibilityModifier.h"
#include "IGS_LevelChangedVisibilitySignatureDelegate.h"
#include "IGS_LevelData.h"
#include "IGS_LevelVisibility.h"
#include "IGS_LevelsVisibilityManagerComponent.generated.h"

class UDataTable;
class UIGS_MetaCutsceneSubsystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_LevelsVisibilityManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultLevelVisibilityTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelChangedVisibilitySignature OnLevelsShownEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIGS_LevelData> m_Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_MetaCutsceneSubsystem> m_MetaCutsceneSubsystem;
    
public:
    UIGS_LevelsVisibilityManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLevelVisibility(const FName& inLevelName, EIGS_LevelVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDefaultLevelVisibility(FName inLevelName, EIGS_LevelVisibility InVisibility);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelVisibilityChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneStarted(FName inCutsceneID, FIGS_MetaCutsceneResults inResults);
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneFinished(FName inCutsceneID, FIGS_MetaCutsceneResults inResults);
    
public:
    UFUNCTION(BlueprintCallable)
    bool MarkLevelsVisibility(const EIGS_LevelsVisibilityModifier inVisibilityModifier, const TArray<FIGS_LevelVisibility>& inLevelVisibilities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllLevelsCorrectlyVisible() const;
    
};

