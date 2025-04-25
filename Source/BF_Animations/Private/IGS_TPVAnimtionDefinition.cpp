#include "IGS_TPVAnimtionDefinition.h"

FIGS_TPVAnimtionDefinition::FIGS_TPVAnimtionDefinition() {
    this->AttackType = EIGS_WeaponAttackType::AT_SemiAuto;
    this->WeaponFireStandFront = NULL;
    this->WeaponFireStandFrontInjured = NULL;
    this->WeaponFire_WeaponActor = NULL;
    this->WeaponReload = NULL;
    this->WeaponReloadEmptyMagazine = NULL;
    this->WeaponReloadCombat = NULL;
    this->WeaponReloadCombatEmptyMagazine = NULL;
    this->ReloadCheck = NULL;
    this->ReloadCheck_Weapon = NULL;
    this->WeaponReload_WeaponActor = NULL;
    this->WeaponReloadEmptyMagazine_WeaponActor = NULL;
    this->WeaponReloadCombat_WeaponActor = NULL;
    this->WeaponReloadCombatEmptyMagazine_WeaponActor = NULL;
    this->IsMontageLooping = false;
    this->ShooterChangeMontage = NULL;
    this->AttackPlayRate = 0.00f;
}

