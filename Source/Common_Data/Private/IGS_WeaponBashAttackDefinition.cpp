#include "IGS_WeaponBashAttackDefinition.h"

FIGS_WeaponBashAttackDefinition::FIGS_WeaponBashAttackDefinition() {
    this->AttackType = EIGS_MeleeAttackType::MAT_Bash;
    this->TraceType = EIGS_MeleeTraceType::MTT_Point;
    this->DamageType = NULL;
    this->ImpactType = NULL;
    this->BaseDamage = 0.00f;
    this->MaxTargets = 0;
    this->MaxRange = 0.00f;
    this->TraceRadius = 0.00f;
    this->SwingMainTraceRadius = 0.00f;
    this->SwingTraceAngle = 0.00f;
}

