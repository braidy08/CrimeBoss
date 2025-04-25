#include "IGS_ArmsAnimtionDefinition.h"

FIGS_ArmsAnimtionDefinition::FIGS_ArmsAnimtionDefinition() {
    this->ShootingMontage = NULL;
    this->IsMontageLooping = false;
    this->ShooterChangeMontage = NULL;
    this->ReloadTacticalSilent = NULL;
    this->ReloadNormalSilent = NULL;
    this->CheckMagazineMontage = NULL;
    this->ReloadTacticalFight = NULL;
    this->ReloadNormalFight = NULL;
    this->LadderShooting = NULL;
    this->LadderShooterChange = NULL;
}

