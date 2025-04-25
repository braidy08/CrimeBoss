#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_ObjectLoadedResultDelegate.h"
#include "IGS_WaitForObjectToBeLoaded.generated.h"

class UIGS_WaitForObjectToBeLoaded;
class UMETA_LevelActorsManagerComponent;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_WaitForObjectToBeLoaded : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectLoadedResult Loaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectLoadedResult Failed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> m_WCO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMETA_LevelActorsManagerComponent> m_LevelActorsManager;
    
public:
    UIGS_WaitForObjectToBeLoaded();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static UIGS_WaitForObjectToBeLoaded* WaitForObjectToBeLoaded(UObject* inWCO, FGameplayTag inObjectID, bool inFailAfterAttempts, int32 inAttemptsCount, float inDelayBetweenAttempts);
    
private:
    UFUNCTION(BlueprintCallable)
    void TryGetObjectFromLevelActorsManager();
    
};

