#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuTileData_ChainBase.h"
#include "IGS_MenuTileData_UrbanLegends.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_MenuTileData_UrbanLegends : public UIGS_MenuTileData_ChainBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActiveUrbanLegend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighestStarRating;
    
public:
    UIGS_MenuTileData_UrbanLegends();

    UFUNCTION(BlueprintCallable)
    void SetIsUnlocked(bool inIsUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCompleted(bool inIsCompleted);
    
    UFUNCTION(BlueprintCallable)
    void SetIsActiveUrbanLegend(bool inIsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetHighScore(int32 inHighScore);
    
    UFUNCTION(BlueprintCallable)
    void SetHighestStarRating(int32 inHighestStarRating);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveUrbanLegend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHighScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHighestStarRating() const;
    
};

