#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "EStimuliType.h"
#include "IGS_StimuliData.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "IGS_AIControllerHelpersLibrary.generated.h"

class AAIController;
class AActor;
class AController;
class AIGS_AIControllerBase;
class AIGS_AIControllerGame;
class AIGS_AIControllerPlayerBot;
class AIGS_GameCharacterFramework;
class AIGS_LootBagPickup;
class AIGS_MonsterCloset;
class UCoverPoint;
class UIGS_OffenceData;
class UIGS_ThrowBagDefinitionComponent;
class UObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AIControllerHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AIControllerHelpersLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UseShootRotation(AIGS_AIControllerGame* InController);
    
    UFUNCTION(BlueprintCallable)
    static void TryApplyAnticamp(AIGS_AIControllerGame* InController);
    
    UFUNCTION(BlueprintCallable)
    static void SetWeaponType(AController* Controller, EIGS_SwitchWeaponTask_WeaponType Slot);
    
    UFUNCTION(BlueprintCallable)
    static void SetWaypointSpeed(AIGS_AIControllerGame* Controller, EIGS_Speed Speed);
    
    UFUNCTION(BlueprintCallable)
    static void SetWaypointCrouch(AIGS_AIControllerGame* Controller, bool Crouch);
    
    UFUNCTION(BlueprintCallable)
    static void SetSniperPointOfInterestPos(const AIGS_GameCharacterFramework* Instigator, FVector InPosition);
    
    UFUNCTION(BlueprintCallable)
    static void SetSniperPointOfInterestActor(const AIGS_GameCharacterFramework* Instigator, AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetScope(AIGS_AIControllerGame* Controller, uint8 scope);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static void SetGlobalSniperPointOfInterestPos(const UObject* inWCO, FVector InPosition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static void SetGlobalSniperPointOfInterestActor(const UObject* inWCO, AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    static void SendStimuliToFriends(AIGS_GameCharacterFramework* Instigator, EStimuliType stimuliType, FIGS_StimuliData stimuliData, float Range);
    
    UFUNCTION(BlueprintCallable)
    static void RequestBotsToThrowLoot(UIGS_ThrowBagDefinitionComponent* inThrowBagDefinitionComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool NeedRevive(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static bool NeedResolvePlayerOverlap(AIGS_AIControllerGame* InController);
    
    UFUNCTION(BlueprintCallable)
    static bool NeedReload(AIGS_AIControllerGame* InController);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetHiddenPosKnow(AAIController* InController, AActor* inTarget, FVector& outPos);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLootingStillValid(AIGS_AIControllerGame* InController, const bool inIgnorePhase, const bool inIgnorePosChange);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLootingCollectionStillValid(AIGS_AIControllerGame* InController, const bool inIgnorePhase, const bool inIgnorePosChange);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLootingCarryableStillValid(AIGS_AIControllerGame* InController, const bool inIgnorePhase, const bool inIgnorePosChange);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLootBagStillPickableBy(AIGS_AIControllerBase* InController, const AIGS_LootBagPickup* inLootBag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInDangerArea(AController* InController, const float InRadius, const bool inAddCapsuleRadiusIfCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCoverValid(const UCoverPoint* inCover, const AIGS_GameCharacterFramework* inQuerier, bool inIncludeDmgDealers, const bool inVerbose);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCoverStillValid(const UCoverPoint* inCover, const AIGS_GameCharacterFramework* inQuerier, FVector inCoverAgainstPoint, bool includeDmgDealers, const bool inVerbose);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_SwitchWeaponTask_WeaponType GetWeaponType(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_Speed GetWaypointSpeed(AIGS_AIControllerGame* Controller);
    
    UFUNCTION(BlueprintCallable)
    static float GetRollToCoverDistance(AIGS_AIControllerGame* InController);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetNextPathPoint(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static TArray<AIGS_MonsterCloset*> GetMonsterClosetsInBox(UObject* inWCO, FVector inOrigin, FVector InBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetLastOrClosestPosOnNavmesh(AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceToNextPathPoint(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCoverAgainstPoint(const AIGS_GameCharacterFramework* inCharacter, bool& outIsDefend);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetCoverAgainstActors(const AIGS_GameCharacterFramework* inQuerier);
    
    UFUNCTION(BlueprintCallable)
    static void FocusToOffence(AIGS_AIControllerBase* InController, UIGS_OffenceData* inOffence);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
static void DeactivateHeistersDefend(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool CanShootAtHiddenPos(AAIController* InController, FVector& outPos);
    
    UFUNCTION(BlueprintCallable)
    static bool CalculatePlayerOverlap(AIGS_AIControllerPlayerBot* playerBot);
    
};

