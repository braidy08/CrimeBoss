#include "IGS_AIGangsterSpecializationHolder.h"
#include "GameplayTagContainer.h"
#include "EIGS_WeaponVisibilityType.h"

FIGS_AIGangsterSpecializationHolder::FIGS_AIGangsterSpecializationHolder() {
    (*this).Variation = EIGS_GangsterVariationType::US_None;
    (*this).Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.HP.bOverloadValue = false;
    (*this).Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.Shield.bOverloadValue = false;
    (*this).Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Default.Enabled = true;
    (*this).Default.Character.Controller = nullptr;
    (*this).Default.Character.Pawns.Empty();
    (*this).Default.Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).Default.Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).Default.Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).Default.Loadout.WeaponProbability.Empty();
    (*this).Default.Loadout.NoThrowableChance = 0;
    (*this).Default.Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Sniper.SpecStats.HitChance = 8.000000119e-01f;
    (*this).Sniper.SpecStats.HiddenTimeInterval.Min = 3.000000000e+00f;
    (*this).Sniper.SpecStats.HiddenTimeInterval.Max = 5.000000000e+00f;
    (*this).Sniper.SpecStats.CompromisedRange = 5.000000000e+02f;
    (*this).Sniper.SpecStats.WeaponVisibilityType = EIGS_WeaponVisibilityType::VT_Laser;
    (*this).Sniper.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.HP.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.HP.bOverloadValue = false;
    (*this).Sniper.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.Shield.bOverloadValue = false;
    (*this).Sniper.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Sniper.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Sniper.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Sniper.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Sniper.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Sniper.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Sniper.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Sniper.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Sniper.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Sniper.Enabled = true;
    (*this).Sniper.Character.Controller = nullptr;
    (*this).Sniper.Character.Pawns.Empty();
    (*this).Sniper.Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).Sniper.Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).Sniper.Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).Sniper.Loadout.WeaponProbability.Empty();
    (*this).Sniper.Loadout.NoThrowableChance = 0;
    (*this).Sniper.Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Sniper.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Sniper.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Sniper.Specialization, 0)) = TEXT("AI.Specialization.Sniper");
    (*this).Shield.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.HP.Value = 0.000000000e+00f;
    (*this).Shield.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.HP.bOverloadValue = false;
    (*this).Shield.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Shield.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.Shield.bOverloadValue = false;
    (*this).Shield.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Shield.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Shield.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Shield.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Shield.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Shield.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Shield.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Shield.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Shield.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Shield.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Shield.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Shield.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Shield.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Shield.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Shield.Enabled = true;
    (*this).Shield.Character.Controller = nullptr;
    (*this).Shield.Character.Pawns.Empty();
    (*this).Shield.Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).Shield.Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).Shield.Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).Shield.Loadout.WeaponProbability.Empty();
    (*this).Shield.Loadout.NoThrowableChance = 0;
    (*this).Shield.Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Shield.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Shield.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Shield.Specialization, 0)) = TEXT("AI.Specialization.Special.Shield");
    (*this).Heavy.SpecStats.WeakspotExplosionDamage = 1.000000000e+02f;
    (*this).Heavy.SpecStats.InitialSpreadMultiplier = 2.000000000e+00f;
    (*this).Heavy.SpecStats.SpreadDuration = 4.000000000e+00f;
    (*this).Heavy.SpecStats.TimeTillOverheat.Min = 1.300000000e+01f;
    (*this).Heavy.SpecStats.TimeTillOverheat.Max = 1.500000000e+01f;
    (*this).Heavy.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.HP.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.HP.bOverloadValue = false;
    (*this).Heavy.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.Shield.bOverloadValue = false;
    (*this).Heavy.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Heavy.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Heavy.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Heavy.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Heavy.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Heavy.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Heavy.Enabled = true;
    (*this).Heavy.Character.Controller = nullptr;
    (*this).Heavy.Character.Pawns.Empty();
    (*this).Heavy.Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).Heavy.Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).Heavy.Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).Heavy.Loadout.WeaponProbability.Empty();
    (*this).Heavy.Loadout.NoThrowableChance = 0;
    (*this).Heavy.Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Heavy.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Heavy.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Heavy.Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
    (*this).Detective.SpecStats.ReviveTimer.Min = 2.000000000e+01f;
    (*this).Detective.SpecStats.ReviveTimer.Max = 3.000000000e+01f;
    (*this).Detective.SpecStats.DownstateHealth = 2.000000000e+03f;
    (*this).Detective.SpecStats.RevivesToRetreat = 3;
    (*this).Detective.SpecStats.MaxHealthForReaction = 1.000000000e+00f;
    (*this).Detective.SpecStats.MaxHealthForCover = 1.000000000e+00f;
    (*this).Detective.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Detective.Stats.HP.Value = 0.000000000e+00f;
    (*this).Detective.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Detective.Stats.HP.bOverloadValue = false;
    (*this).Detective.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Detective.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Detective.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Detective.Stats.Shield.bOverloadValue = false;
    (*this).Detective.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Detective.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Detective.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Detective.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Detective.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Detective.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Detective.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Detective.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Detective.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Detective.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Detective.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Detective.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Detective.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Detective.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Detective.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Detective.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Detective.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Detective.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Detective.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Detective.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Detective.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Detective.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Detective.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Detective.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Detective.Enabled = true;
    (*this).Detective.Character.Controller = nullptr;
    (*this).Detective.Character.Pawns.Empty();
    (*this).Detective.Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).Detective.Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).Detective.Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).Detective.Loadout.WeaponProbability.Empty();
    (*this).Detective.Loadout.NoThrowableChance = 0;
    (*this).Detective.Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Detective.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Detective.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Detective.Specialization, 0)) = TEXT("AI.Specialization.Special.Detective");
    (*this).TurfWar.Stats.HP.Overload = 0.000000000e+00f;
    (*this).TurfWar.Stats.HP.Value = 0.000000000e+00f;
    (*this).TurfWar.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).TurfWar.Stats.HP.bOverloadValue = false;
    (*this).TurfWar.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).TurfWar.Stats.Shield.Value = 0.000000000e+00f;
    (*this).TurfWar.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).TurfWar.Stats.Shield.bOverloadValue = false;
    (*this).TurfWar.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).TurfWar.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).TurfWar.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).TurfWar.Stats.WeaponDamage.bOverloadValue = false;
    (*this).TurfWar.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).TurfWar.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).TurfWar.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).TurfWar.Stats.MeleeDamage.bOverloadValue = false;
    (*this).TurfWar.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).TurfWar.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).TurfWar.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).TurfWar.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).TurfWar.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).TurfWar.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).TurfWar.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).TurfWar.Stats.MovementSpeed.bOverloadValue = false;
    (*this).TurfWar.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).TurfWar.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).TurfWar.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).TurfWar.Stats.CoverStickiness.bOverloadValue = false;
    (*this).TurfWar.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).TurfWar.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).TurfWar.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).TurfWar.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).TurfWar.Enabled = true;
    (*this).TurfWar.Character.Controller = nullptr;
    (*this).TurfWar.Character.Pawns.Empty();
    (*this).TurfWar.Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).TurfWar.Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).TurfWar.Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).TurfWar.Loadout.WeaponProbability.Empty();
    (*this).TurfWar.Loadout.NoThrowableChance = 0;
    (*this).TurfWar.Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TurfWar.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).TurfWar.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TurfWar.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).HeavyMelee.SpecStats.SecondaryMeleeWeapon = nullptr;
    (*this).HeavyMelee.SpecStats.MaxMeleeRange = 0.000000000e+00f;
    (*this).HeavyMelee.SpecStats.MinMeleeRange = 0.000000000e+00f;
    (*this).HeavyMelee.SpecStats.DestroyableWeaponHealth = 1.000000000e+03f;
    (*this).HeavyMelee.SpecStats.DestroyableWeaponDamage = 3.000000000e+02f;
    (*this).HeavyMelee.SpecStats.ChargeSteeringMaxWidth = 5.000000000e+02f;
    (*this).HeavyMelee.SpecStats.ChargeSteeringMinWidth = 5.000000000e+01f;
    (*this).HeavyMelee.SpecStats.ChargeSteeringMaxDistance = 1.500000000e+03f;
    (*this).HeavyMelee.Stats.HP.Overload = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.HP.Value = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).HeavyMelee.Stats.HP.bOverloadValue = false;
    (*this).HeavyMelee.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.Shield.Value = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).HeavyMelee.Stats.Shield.bOverloadValue = false;
    (*this).HeavyMelee.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).HeavyMelee.Stats.WeaponDamage.bOverloadValue = false;
    (*this).HeavyMelee.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).HeavyMelee.Stats.MeleeDamage.bOverloadValue = false;
    (*this).HeavyMelee.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).HeavyMelee.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).HeavyMelee.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).HeavyMelee.Stats.MovementSpeed.bOverloadValue = false;
    (*this).HeavyMelee.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).HeavyMelee.Stats.CoverStickiness.bOverloadValue = false;
    (*this).HeavyMelee.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).HeavyMelee.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).HeavyMelee.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).HeavyMelee.Enabled = true;
    (*this).HeavyMelee.Character.Controller = nullptr;
    (*this).HeavyMelee.Character.Pawns.Empty();
    (*this).HeavyMelee.Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).HeavyMelee.Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).HeavyMelee.Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).HeavyMelee.Loadout.WeaponProbability.Empty();
    (*this).HeavyMelee.Loadout.NoThrowableChance = 0;
    (*this).HeavyMelee.Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).HeavyMelee.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).HeavyMelee.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).HeavyMelee.Specialization, 0)) = TEXT("AI.Specialization.Default");
}

