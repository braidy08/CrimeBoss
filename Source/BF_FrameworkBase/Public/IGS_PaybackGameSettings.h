#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TeamSideAffinitiesHolder.h"
#include "IGS_PaybackGameSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BF_FRAMEWORKBASE_API UIGS_PaybackGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_TeamSideEnum, FColor> TeamSideColors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_TeamSideEnum, FIGS_TeamSideAffinitiesHolder> TeamSideAffinitiesMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JitterWarningThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JitterSevereThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PacketLossWarningThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PacketLossSevereThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LatencyWarningThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LatencySevereThreshold;
    
    UIGS_PaybackGameSettings();

};

