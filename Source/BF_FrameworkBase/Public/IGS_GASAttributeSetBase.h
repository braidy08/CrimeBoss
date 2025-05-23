#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Abilities/GameplayAbility.h"
#include "IGS_GASAttributeSetBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GASAttributeSetBase : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SprintSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CrouchSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CrouchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CarryingSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CarryingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSMovementSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ADSMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponDamageMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WeaponDamageMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeDamageMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleeDamageMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ThrowableDamageMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ThrowableDamageMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RPMMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RPMMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReloadSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ReloadSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ADSSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HolsterSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HolsterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LookSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LookSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazineSizeMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MagazineSizeMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AmmoReserveSizeMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AmmoReserveSizeMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagazineSizeAddition, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MagazineSizeAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AmmoReserveSizeAddition, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AmmoReserveSizeAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipFireSpread, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HipFireSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSSpread, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ADSSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AimingStability, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AimingStability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpreadPerKillMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SpreadPerKillMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpreadPerKillMaxDecrease, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SpreadPerKillMaxDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpreadPerKillMultReduction, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SpreadPerKillMultReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoilMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RecoilMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoilPerKillMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RecoilPerKillMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoilPerKillMultReduction, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RecoilPerKillMultReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeWeaponRangeMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleeWeaponRangeMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectionSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DetectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtraBag, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ExtraBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BulletDamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BulletDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosiveDamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ExplosiveDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireDamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData FireDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeDamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleeDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IgnoreDamageChance, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData IgnoreDamageChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageImmunityTime, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DamageImmunityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageImmunityTimeCooldown, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DamageImmunityTimeCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenDelay, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthRegenMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenMultiplierDebuff, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthRegenMultiplierDebuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlashEffectivity, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData FlashEffectivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StunEffectivity, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StunEffectivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReviveSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ReviveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BeingRevivedSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BeingRevivedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DownStateDuration, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DownStateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AdditionalDownStateCount, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AdditionalDownStateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Selfrevive, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Selfrevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Ability1Charges, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Ability1Charges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityRegenSpeedMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AbilityRegenSpeedMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityDurationKillIncrease, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AbilityDurationKillIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityDurationMeleeKillIncrease, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AbilityDurationMeleeKillIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityMaxIncrease, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AbilityMaxIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeKillFirstHeal, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleeKillFirstHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeKillConsecutiveHeal, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleeKillConsecutiveHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeKillMaxHeal, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleeKillMaxHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SASInstinctRange, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SASInstinctRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SASInstinctTimeTillFirstActivation, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SASInstinctTimeTillFirstActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SASInstinctSenseDuration, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SASInstinctSenseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SASInstinctExpirationTime, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SASInstinctExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PsychopathDecayDelay, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PsychopathDecayDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AIFiringTimeMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AIFiringTimeMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AICombatRangeMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AICombatRangeMult;
    
    UIGS_GASAttributeSetBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponDamageMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ThrowableDamageMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StunEffectivity(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SprintSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpreadPerKillMultReduction(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpreadPerKillMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpreadPerKillMaxDecrease(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Selfrevive(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SASInstinctTimeTillFirstActivation(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SASInstinctSenseDuration(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SASInstinctRange(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SASInstinctExpirationTime(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RPMMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReviveSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReloadSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoilPerKillMultReduction(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoilPerKillMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecoilMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PsychopathDecayDelay(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeWeaponRangeMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeKillMaxHeal(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeKillFirstHeal(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeKillConsecutiveHeal(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeDamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeDamageMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazineSizeMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MagazineSizeAddition(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LookSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IgnoreDamageChance(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HolsterSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipFireSpread(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenMultiplierDebuff(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenMultiplier(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenDelay(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthMultiplier(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FlashEffectivity(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireDamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtraBag(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosiveDamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DownStateDuration(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectionSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageImmunityTimeCooldown(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageImmunityTime(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CrouchSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarryingSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BulletDamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BeingRevivedSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoReserveSizeMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoReserveSizeAddition(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AimingStability(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AIFiringTimeMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AICombatRangeMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSSpread(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSMovementSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AdditionalDownStateCount(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityRegenSpeedMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityMaxIncrease(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityDurationMeleeKillIncrease(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityDurationKillIncrease(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Ability1Charges(const FGameplayAttributeData& inOldValue);
    
};

