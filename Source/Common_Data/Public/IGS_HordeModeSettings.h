#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_HordeModeSettings.generated.h"

class UDataTable;
class UIGS_HordeModeSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class COMMON_DATA_API UIGS_HordeModeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SwatSpawnOnWave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScudosSpawnOnWave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSavedMissions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> UpgradesTable;
    
    UIGS_HordeModeSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_HordeModeSettings* GetDefaultHordeModeSettings();
    
};

