#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMETA_ConditionExprOperator.h"
#include "EMETA_OrderOfMagnitude.h"
#include "IGS_TextUtils.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_TextUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_TextUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText JoinTextArrayNatural(const TArray<FText>& inTexts, const EMETA_ConditionExprOperator inConjuction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText JoinTextArray(const TArray<FText>& inTexts, const FString& inSeparator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMETA_OrderOfMagnitude GetOrderOfMagniture(const int32& InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AsDollars(const int32& InValue, const bool inAlwaysSign, const bool inShortFormat);
    
};

