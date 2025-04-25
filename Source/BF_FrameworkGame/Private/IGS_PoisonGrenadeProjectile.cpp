#include "IGS_PoisonGrenadeProjectile.h"
#include "Net/UnrealNetwork.h"

AIGS_PoisonGrenadeProjectile::AIGS_PoisonGrenadeProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExpansionDuration = 2.00f;
    this->Duration = 10.00f;
    this->DamageTickTime = 0.20f;
    this->PathfindingDistanceMultiplier = 2.00f;
    this->DrawDebug = false;
    this->ParticleCircleSegments = 16;
    this->ParticleRadiusSegments = 2;
    this->ParticleOffsetRadius = 15.00f;
}

void AIGS_PoisonGrenadeProjectile::OnRep_ParticlePositions() {
}


void AIGS_PoisonGrenadeProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_PoisonGrenadeProjectile, ParticlePositions);
}


