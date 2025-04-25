#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMETA_RespectLvl.h"
#include "IGS_PlayerManangerInitializedDelegate.h"
#include "IGS_PlayerManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_PlayerManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerManangerInitialized OnManagerInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerDataDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerInitialized;
    
public:
    UIGS_PlayerManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManagerInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_RespectLvl GetPlayerRespect() const;
    
};

