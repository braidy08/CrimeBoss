#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_CommonUtilsDevSettings.generated.h"

class UDataTable;

UCLASS(BlueprintType, DefaultConfig, Config="DeveloperSettings/Dev_CommonUtilsSettings")
class COMMON_UTILS_API UIGS_CommonUtilsDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_CommonUtilsDevSettings();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> EntitlementsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> OnlineFactsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> EventItemsDataTable;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString FreeWeekend_URL;

};

