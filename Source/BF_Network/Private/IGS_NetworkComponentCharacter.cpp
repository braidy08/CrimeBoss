#include "IGS_NetworkComponentCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_NetworkComponentCharacter::UIGS_NetworkComponentCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickupClasses = NULL;
    this->mR_CharacterState = EIGS_CharacterState::Calm;
    this->mR_CharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::None;
    this->mR_DamageImmunityActive = false;
    this->mR_MovementSpeed = EIGS_Speed::MS_Walk;
    this->mR_RequestedLeanSide = EIGS_LeanSide::LeanSide_None;
    this->mR_LeaningDirection = EIGS_CharacterLeaningDirectionEnum::None;
    this->mR_IsMovingForced = false;
    this->mR_IsMantling = false;
    this->mR_IsVisibilityModOn = false;
    this->mR_IsRunningAttack = false;
    this->mR_ShooterType = EIGS_WeaponAttackType::AT_UNKNOWN;
    this->mR_AvailableWieldables.AddDefaulted(6);
    this->m_OwningInventoryObjects.AddDefaulted(6);
    this->mR_CurrentSlot = EIGS_WieldableSlot::S_Unarmed;
    this->OverrideCharacterAkSwitch = NULL;
    this->ComponentData = NULL;
    this->Data = NULL;
    this->DialogueData = NULL;
    this->VoiceExpressionEnabled = true;
    this->NearDeathHealthPercentage = 0.40f;
    this->SpeakerAkSwitch = NULL;
    this->CharacterAkSwitch = NULL;
}

void UIGS_NetworkComponentCharacter::StopVoice(const FIGS_PlayVariationData& inPlayVariationData) {
}

void UIGS_NetworkComponentCharacter::SetUniversalDataByItemID(int32 inID, FIGS_InventoryObjectUniversalData inUniversalData) {
}

void UIGS_NetworkComponentCharacter::Set2DModeEnabled(bool inState) {
}

void UIGS_NetworkComponentCharacter::PlayVoice(const FIGS_PlayVariationData& inPlayVariationData) {
}

void UIGS_NetworkComponentCharacter::OnWieldableRemoved(EIGS_WieldableSlot inSlot) {
}

void UIGS_NetworkComponentCharacter::OnWieldableAddedToSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlot) {
}

void UIGS_NetworkComponentCharacter::OnSlotChanged(EIGS_WieldableSlot inSlot) {
}

void UIGS_NetworkComponentCharacter::OnRep_ShooterType() {
}

void UIGS_NetworkComponentCharacter::OnRep_RequestLeadSide() const {
}

void UIGS_NetworkComponentCharacter::OnRep_ReplicatedLadder() const {
}

void UIGS_NetworkComponentCharacter::OnRep_ReplicatedAcceleration() const {
}

void UIGS_NetworkComponentCharacter::OnRep_PlayingAnimations() {
}

void UIGS_NetworkComponentCharacter::OnRep_MovementSpeed() const {
}

void UIGS_NetworkComponentCharacter::OnRep_LootBagInfo(FIGS_BagInfo inOldInfo) const {
}

void UIGS_NetworkComponentCharacter::OnRep_LookAtPoint() const {
}

void UIGS_NetworkComponentCharacter::OnRep_LeaningDirection() const {
}

void UIGS_NetworkComponentCharacter::OnRep_IsVisibilityModOn() const {
}

void UIGS_NetworkComponentCharacter::OnRep_IsRunningAttack() {
}

void UIGS_NetworkComponentCharacter::OnRep_IsMovingForced() const {
}

void UIGS_NetworkComponentCharacter::OnRep_IsMantling() const {
}

void UIGS_NetworkComponentCharacter::OnRep_DamageImmunityActive() const {
}

void UIGS_NetworkComponentCharacter::OnRep_CurrentSlot() {
}

void UIGS_NetworkComponentCharacter::OnRep_CharacterVsHeistersCollisionStatus() const {
}

void UIGS_NetworkComponentCharacter::OnRep_CharacterState() const {
}

void UIGS_NetworkComponentCharacter::OnRep_CharacterAiming() const {
}

void UIGS_NetworkComponentCharacter::OnRep_AvailableWieldables() {
}

void UIGS_NetworkComponentCharacter::OnRep_AimAtPoint() const {
}

void UIGS_NetworkComponentCharacter::OnExpressionVoiceDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UIGS_NetworkComponentCharacter::OnCurrentlyFilledBagChanged() {
}

void UIGS_NetworkComponentCharacter::Multicast_RequestAnimationTaskTag_Implementation(FGameplayTag inMontageTag, float inRequestedDuration, int32 inRandomSeed) {
}

void UIGS_NetworkComponentCharacter::Multicast_AnimationTaskCanceledTag_Implementation(FGameplayTag inMontageTag, EIGS_AnimationTaskFinishedReason inCancelReason, int32 inRandomSeed) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_WeaponMagCheckInterrupt_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToServer_WeaponMagCheck_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToServer_UpdateAvailableWieldables_Implementation(const TArray<FIGS_WieldableReplicatedData>& inWieldables) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_ToggleVisibility_Implementation(bool inVisible) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_ThrowThrowable_Implementation(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inSpawnLocation, const FQuat& inSpawnRotation, bool inThrowLow, float inTimeHeldInHand) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_ThrowAwayItem_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_ThrowAwayBag_Implementation(FIGS_LootBagItemHolder inLootBagInfo, FTransform InTransform, bool inThrow) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_StopAttack_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToServer_SpawnMovingProjectile_Implementation(const FTransform& inSpawnTransform) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_SpawnBag_Implementation(FIGS_LootBagItemHolder inLootBagInfo, FTransform InTransform) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_Shoot_Implementation(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_SetRequestedLeanSide_Implementation(EIGS_LeanSide inRequestedLeanSide) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_SetMovementSpeed_Implementation(EIGS_Speed inMovementSpeed) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_SetLeaningDirection_Implementation(EIGS_CharacterLeaningDirectionEnum inLeaningDirection) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_SetCurrentSlot_Implementation(EIGS_WieldableSlot inSlot) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_Reload_Implementation(bool inIsCombat, bool inIsEmptyMagazine) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_PocketLootClear_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToServer_PocketLootAdded_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inPocketLoot) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_PlantThrowable_Implementation(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inPlantLocation, const FRotator& inPlantRotation) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnThrowStart_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnThrowFinish_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnThrowCancel_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnPlayerSpecialAction_Implementation(EIGS_SpecialActionType inType) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnLootBagCountChanged_Implementation(int32 inCount, const TArray<EIGS_BagType>& inBagTypes) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnCurrentLootBagChanged_Implementation(const TArray<FIGS_LootBagInfo>& inBagInfos) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_NotifyHitBash_Implementation(const FIGS_BashResultNetwork& inBashData) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_NotifyHit_Implementation(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_MeleeAttack_Implementation(EIGS_MeleeAttackType inMeleeAttackType) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_ItemRemoved_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_ItemAdded_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_InventoryCleared_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToServer_InterruptReload_Implementation(EIGS_ReloadInterruptReasonEnum inInterruptReason, bool inImmediateInterrupt) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_ExplodedInHand_Implementation(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_DropDownItem_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_DetonateThrowable_Implementation(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_CharacterAim_Implementation(bool inIsAiming, float inAimInSpeedMult, float inAimOutSpeedMult) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_ChangeShooter_Implementation(EIGS_WeaponAttackType inAttackType) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_BeginAttack_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToServer_AdvancedMovementEvent_Implementation(EIGS_AdvancedMovementEvent inAdvancedMovementEvent) {
}

void UIGS_NetworkComponentCharacter::MessageToClient_Rollback_Implementation(AActor* inActor, float inHealth) const {
}

void UIGS_NetworkComponentCharacter::MessageToAll_WeaponMagCheckInterrupt_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToAll_WeaponMagCheck_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToAll_StopAttack_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToAll_Shoot_Implementation(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_Reload_Implementation(bool inIsCombat, bool inIsEmptyMagazine) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_OnThrowStart_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_OnThrowFinish_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_OnThrowCancel_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_OnPlayerSpecialAction_Implementation(EIGS_SpecialActionType inType) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_MeleeAttack_Implementation(EIGS_MeleeAttackType inMeleeAttackType) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_IsMovingForced_Implementation(bool inIsMovingForced) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_InterruptReload_Implementation(EIGS_ReloadInterruptReasonEnum inInterruptReason, const bool inImmediateInterrupt) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_HitSynchronizedBash_Implementation(const FIGS_BashResultNetwork& inBashData) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_HitSynchronized_Implementation(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_ChangeShooter_Implementation(EIGS_WeaponAttackType inAttackType) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_BeginAttack_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToAll_AdvancedMovementEvent_Implementation(EIGS_AdvancedMovementEvent inAdvancedMovementEvent) {
}

bool UIGS_NetworkComponentCharacter::IsPlayingVoice(int32 inGroupID, const FIGS_DialogueGroupCharacterHolder& inCharacter) {
    return false;
}

float UIGS_NetworkComponentCharacter::GetVoiceProgress(int32 inGroupID) {
    return 0.0f;
}

FIGS_InventoryObjectUniversalData UIGS_NetworkComponentCharacter::GetUniversalDataByItemID(int32 inID) {
    return FIGS_InventoryObjectUniversalData{};
}

float UIGS_NetworkComponentCharacter::GetPlayerBaggedLootWeight() {
    return 0.0f;
}

void UIGS_NetworkComponentCharacter::All_ResetVoiceSFX_Implementation(uint16 inGroupID) {
}

void UIGS_NetworkComponentCharacter::All_OnStopVoice_Implementation(FIGS_PlayVariationData inPlayVariationData) {
}

void UIGS_NetworkComponentCharacter::All_OnPlayVoice_Implementation(FIGS_PlayVariationData inPlayVariationData) {
}

void UIGS_NetworkComponentCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_AimAtPoint);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_LookAtPoint);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_CharacterAiming);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_PlayingAnimation);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_LootBagInfo);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_FullLootBagInfos);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_CharacterState);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_CharacterVsHeistersCollisionStatus);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_DamageImmunityActive);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_MovementSpeed);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_RequestedLeanSide);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_LeaningDirection);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_IsMovingForced);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_IsMantling);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_ReplicatedAcceleration);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_ReplicatedLadder);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_IsVisibilityModOn);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_IsRunningAttack);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_ShooterType);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_AvailableWieldables);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_CurrentSlot);
}


