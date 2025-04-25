#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EIGS_EventState.h"
#include "IGS_EventStateChangedEventDelegate.h"
#include "IGS_EventBase.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class BF_FRAMEWORKBASE_API UIGS_EventBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EventStateChangedEvent OnStateChanged;
    
    UIGS_EventBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetVisibleFromDate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_EventState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowPopup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEventTypeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetEndsAtDate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetActiveFromDate() const;
    
};

