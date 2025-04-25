#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "META_ShuffleBagData.h"
#include "META_ShuffleBag.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_ShuffleBag : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_ShuffleBagData Data;
    
    UMETA_ShuffleBag();

    UFUNCTION(BlueprintCallable)
    void SetTagID(const FGameplayTag& inTagID);
    
    UFUNCTION(BlueprintCallable)
    int32 Pick();
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromSaveData(const FMETA_ShuffleBagData inData);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FGameplayTag& inTagID, const TArray<int32>& inItems, const int32 inResetThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTagID() const;
    
};

