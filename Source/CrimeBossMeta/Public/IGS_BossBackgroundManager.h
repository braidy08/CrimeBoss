#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BackgroundChangeFinishedDelegate.h"
#include "IGS_BossBackgroundLevenNameEventDelegate.h"
#include "IGS_BossBackgroundManager.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_BossBackgroundManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackgroundChangeFinished OnBackgroundChangeFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BossBackgroundLevenNameEvent OnBackgroundLevelNameChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBackgroundLevelName, meta=(AllowPrivateAccess=true))
    FName CurrentBackgroundLevelName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BackgroundChangeInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CurrentLevelToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WaitingLevelToLoad;
    
public:
    UIGS_BossBackgroundManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UnloadIncorrectLevel(FName inLevelToUnload);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentBackgroundLevelByProgressionLevel(int32 inProgressionLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBackgroundLevelName();
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadCorrectLevel(FName inLevelToLoad);
    
    UFUNCTION(BlueprintCallable)
    void LevelHandlingFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAnyBackgroundLoaded();
    
private:
    UFUNCTION(BlueprintCallable)
    void IncorrectLevelUnloaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameForLevel(int32 inLevel);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetLoadedBackgroundLevelNames() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceLevelVisbility(FName inLevel, bool inShouldBeVisible);
    
};

