#include "IGS_AIControllerHelpersLibrary.h"

UIGS_AIControllerHelpersLibrary::UIGS_AIControllerHelpersLibrary() {
}

bool UIGS_AIControllerHelpersLibrary::UseShootRotation(AIGS_AIControllerGame* InController) {
    return false;
}

void UIGS_AIControllerHelpersLibrary::TryApplyAnticamp(AIGS_AIControllerGame* InController) {
}

void UIGS_AIControllerHelpersLibrary::SetWeaponType(AController* Controller, EIGS_SwitchWeaponTask_WeaponType Slot) {
}

void UIGS_AIControllerHelpersLibrary::SetWaypointSpeed(AIGS_AIControllerGame* Controller, EIGS_Speed Speed) {
}

void UIGS_AIControllerHelpersLibrary::SetWaypointCrouch(AIGS_AIControllerGame* Controller, bool Crouch) {
}

void UIGS_AIControllerHelpersLibrary::SetSniperPointOfInterestPos(const AIGS_GameCharacterFramework* Instigator, FVector InPosition) {
}

void UIGS_AIControllerHelpersLibrary::SetSniperPointOfInterestActor(const AIGS_GameCharacterFramework* Instigator, AActor* inActor) {
}

void UIGS_AIControllerHelpersLibrary::SetScope(AIGS_AIControllerGame* Controller, uint8 scope) {
}

void UIGS_AIControllerHelpersLibrary::SetGlobalSniperPointOfInterestPos(const UObject* inWCO, FVector InPosition) {
}

void UIGS_AIControllerHelpersLibrary::SetGlobalSniperPointOfInterestActor(const UObject* inWCO, AActor* inActor) {
}

void UIGS_AIControllerHelpersLibrary::SendStimuliToFriends(AIGS_GameCharacterFramework* Instigator, EStimuliType stimuliType, FIGS_StimuliData stimuliData, float Range) {
}

void UIGS_AIControllerHelpersLibrary::RequestBotsToThrowLoot(UIGS_ThrowBagDefinitionComponent* inThrowBagDefinitionComponent) {
}

bool UIGS_AIControllerHelpersLibrary::NeedRevive(AController* Controller) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::NeedResolvePlayerOverlap(AIGS_AIControllerGame* InController) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::NeedReload(AIGS_AIControllerGame* InController) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::IsTargetHiddenPosKnow(AAIController* InController, AActor* inTarget, FVector& outPos) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::IsLootingStillValid(AIGS_AIControllerGame* InController, const bool inIgnorePhase, const bool inIgnorePosChange) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::IsLootingCollectionStillValid(AIGS_AIControllerGame* InController, const bool inIgnorePhase, const bool inIgnorePosChange) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::IsLootingCarryableStillValid(AIGS_AIControllerGame* InController, const bool inIgnorePhase, const bool inIgnorePosChange) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::IsLootBagStillPickableBy(AIGS_AIControllerBase* InController, const AIGS_LootBagPickup* inLootBag) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::IsInDangerArea(AController* InController, const float InRadius, const bool inAddCapsuleRadiusIfCharacter) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::IsCoverValid(const UCoverPoint* inCover, const AIGS_GameCharacterFramework* inQuerier, bool inIncludeDmgDealers, const bool inVerbose) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::IsCoverStillValid(const UCoverPoint* inCover, const AIGS_GameCharacterFramework* inQuerier, FVector inCoverAgainstPoint, bool includeDmgDealers, const bool inVerbose) {
    return false;
}

EIGS_SwitchWeaponTask_WeaponType UIGS_AIControllerHelpersLibrary::GetWeaponType(AController* Controller) {
    return EIGS_SwitchWeaponTask_WeaponType::WT_Unknown;
}

EIGS_Speed UIGS_AIControllerHelpersLibrary::GetWaypointSpeed(AIGS_AIControllerGame* Controller) {
    return EIGS_Speed::MS_Walk;
}

float UIGS_AIControllerHelpersLibrary::GetRollToCoverDistance(AIGS_AIControllerGame* InController) {
    return 0.0f;
}

FVector UIGS_AIControllerHelpersLibrary::GetNextPathPoint(AAIController* Controller) {
    return FVector{};
}

TArray<AIGS_MonsterCloset*> UIGS_AIControllerHelpersLibrary::GetMonsterClosetsInBox(UObject* inWCO, FVector inOrigin, FVector InBoxExtent) {
    return TArray<AIGS_MonsterCloset*>();
}

FVector UIGS_AIControllerHelpersLibrary::GetLastOrClosestPosOnNavmesh(AActor* inActor) {
    return FVector{};
}

float UIGS_AIControllerHelpersLibrary::GetDistanceToNextPathPoint(AAIController* Controller) {
    return 0.0f;
}

FVector UIGS_AIControllerHelpersLibrary::GetCoverAgainstPoint(const AIGS_GameCharacterFramework* inCharacter, bool& outIsDefend) {
    return FVector{};
}

TArray<AActor*> UIGS_AIControllerHelpersLibrary::GetCoverAgainstActors(const AIGS_GameCharacterFramework* inQuerier) {
    return TArray<AActor*>();
}

void UIGS_AIControllerHelpersLibrary::FocusToOffence(AIGS_AIControllerBase* InController, UIGS_OffenceData* inOffence) {
}

void UIGS_AIControllerHelpersLibrary::DeactivateHeistersDefend(const UObject* inWCO) {
}

bool UIGS_AIControllerHelpersLibrary::CanShootAtHiddenPos(AAIController* InController, FVector& outPos) {
    return false;
}

bool UIGS_AIControllerHelpersLibrary::CalculatePlayerOverlap(AIGS_AIControllerPlayerBot* playerBot) {
    return false;
}


