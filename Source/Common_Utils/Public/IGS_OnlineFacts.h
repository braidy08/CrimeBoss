#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_OnlineFactsUpdatedSignatureDelegate.h"
#include "IGS_OnlineFacts.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_OnlineFacts : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnlineFactsUpdatedSignature OnlineFactsUpdated;
    
    UIGS_OnlineFacts();

    UFUNCTION(BlueprintCallable)
    void RefreshOnlineData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActive(const FGameplayTag& inID, bool inDefault) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Exists(const FGameplayTag& inID) const;
    
};

