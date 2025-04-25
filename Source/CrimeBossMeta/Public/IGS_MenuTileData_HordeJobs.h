#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuTileData_Jobs.h"
#include "IGS_MenuTileData_HordeJobs.generated.h"

class UMETA_HordeModeMission;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_MenuTileData_HordeJobs : public UIGS_MenuTileData_Jobs {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_HordeModeMission* BestHordeJob;
    
public:
    UIGS_MenuTileData_HordeJobs();

    UFUNCTION(BlueprintCallable)
    void SetBestJob(UMETA_HordeModeMission* inBestJob);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_HordeModeMission* GetBestJob();
    
};

