#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_HitInfo.h"
#include "IGS_WeakSpotObjectStatusHealthChangedEventSignatureDelegate.h"
#include "IGS_WeakSpotReference.h"
#include "IGS_WeakSpotSignatureDelegate.h"
#include "IGS_WeakSpotComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_WeakSpotComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeakSpotSignature OnWeakSpotCompromisedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeakSpotObjectStatusHealthChangedEventSignature OnWeakSpotHealthChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FIGS_WeakSpotReference> mR_WeakSpots;
    
public:
    UIGS_WeakSpotComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool SetWeakSpotEnabled(const UPrimitiveComponent* inWeakSpotReference, const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadIsWeakSpot(const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnabled(const bool inEnabled);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_WeakSpotCompromised(const UPrimitiveComponent* inWeakSpotReference, const FIGS_HitInfo& inLastHitInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasWeakSpotComponentEnabled(const UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    bool AddWeakSpot(const UPrimitiveComponent* inWeakSpotReference, const float inHealth, const bool inEnableAutomatically, const float inAIDamageMultiplier);
    
};

