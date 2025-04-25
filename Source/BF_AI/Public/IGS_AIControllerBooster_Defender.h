#pragma once
#include "CoreMinimal.h"
#include "IGS_DefenderAntiPushData.h"
#include "IGS_DefenderSniperData.h"
#include "IGS_FrenzyBoostData.h"
#include "IGS_AIControllerBooster_Base.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIControllerBooster_Defender.generated.h"

class UIGS_AIMeleeWeaponDef;
class UIGS_AIPrimaryWeaponDef;
class UIGS_AISecondaryWeaponDef;
class UIGS_ThrowableInventoryObject;
class UIGS_WeaponInventoryObject;

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerBooster_Defender : public AIGS_AIControllerBooster_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FrenzyBoostData CustomFrenzyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DefenderAntiPushData CustomAntiPushData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DefenderSniperData CustomSniperData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WeaponInventoryObject* m_SniperWeaponObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WeaponInventoryObject* m_PrimaryWeaponObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AIPrimaryWeaponDef* m_SniperWeaponDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AIPrimaryWeaponDef* m_PrimaryWeaponDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AISecondaryWeaponDef* m_SecondaryWeaponDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AIMeleeWeaponDef* m_MeleeWeaponDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ThrowableInventoryObject> m_AntiPushThrowable;
    
public:
    AIGS_AIControllerBooster_Defender(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnThrowableAssetLoaded(const TSoftClassPtr<UIGS_ThrowableInventoryObject> inSoft);
    
    UFUNCTION(BlueprintCallable)
    void OnSniperAssetLoaded(const TSoftClassPtr<UIGS_AIPrimaryWeaponDef> inSoft);
    
};

