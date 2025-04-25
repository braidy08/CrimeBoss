#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "META_BaseFPSMission.h"
#include "META_FPSMissionRowInfo.h"
#include "META_HordeModeMissionSave.h"
#include "Templates/SubclassOf.h"
#include "META_HordeModeMission.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_HordeModeMission : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_HordeModeMissionSave m_HordeModeMissionSave;
    
public:
    UMETA_HordeModeMission();

    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_HordeModeMissionSave& inHordeModeMissionSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_HordeModeMissionSave GetSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayersCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<TSubclassOf<UGameplayEffect>, float> GetPerkUpgrades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoney() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxWaveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FPSMissionRowInfo GetInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeisterMoney() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetDateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCompletedWave() const;
    
};

