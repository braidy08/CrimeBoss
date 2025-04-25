#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EIGS_EventState.h"
#include "IGS_EventStateChangedEventDelegate.h"
#include "IGS_EventsManager.generated.h"

class UIGS_EventBase;
class UIGS_EventSystemSettings;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_EventsManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EventStateChangedEvent OnEventStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_EventSystemSettings* m_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UIGS_EventBase*> m_Events;
    
public:
    UIGS_EventsManager();

    UFUNCTION(BlueprintCallable)
    void UpdateEvents();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEventStateChanged_Internal(FName inID, EIGS_EventState inOldState, EIGS_EventState inNewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventVisible(FName inID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventActive(FName inID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIGS_EventBase*> GetVisibleEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_EventBase* GetEventByID(FName inID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIGS_EventBase*> GetAllEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIGS_EventBase*> GetActiveEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_EventBase* GetActiveEventByTypeTag(FGameplayTag inTypeTag, bool inExactMatch) const;
    
};

