#include "IGS_WeaponAnimtionDefinition.h"

FIGS_WeaponAnimtionDefinition::FIGS_WeaponAnimtionDefinition() {
    this->ShootingMontage = NULL;
    this->IsMontageLooping = false;
    this->ShooterChangeMontage = NULL;
    this->WeaponReloadTacticalSilent = NULL;
    this->WeaponReloadNormalSilent = NULL;
    this->CheckMagazineWeaponMontage = NULL;
    this->WeaponReloadTacticalFight = NULL;
    this->WeaponReloadNormalFight = NULL;
    this->LadderShooting = NULL;
    this->LadderShooterChange = NULL;
}

