#pragma once
#include "CoreMinimal.h"
#include "IGS_BlockedPlayerHolder.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_BlockPlayerManager.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_BlockPlayerManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_BlockPlayerManager();

    UFUNCTION(BlueprintCallable)
    void UnblockPlayer(const FString& inProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerBlocked(const APlayerState* inPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfBlockedPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberOfBlockedPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_BlockedPlayerHolder> GetAllBlockedPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    void BlockPlayer(const APlayerState* inBlockedPlayerState);
    
};

