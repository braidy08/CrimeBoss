#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EIGS_MenuTileSize.h"
#include "IGS_MenuTileImageOffset.h"
#include "IGS_MenuTileDataBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_MenuTileDataBase : public UObject {
    GENERATED_BODY()
public:
    UIGS_MenuTileDataBase();

    UFUNCTION(BlueprintCallable)
    void SetIsOwned(bool inIsOwned);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNew(bool inIsNew);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDLC(bool inIsDLC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MenuTileSize GetTileSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOwned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNew();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDLC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_MenuTileImageOffset GetImageOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetIdTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEntitlementTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription();
    
};

