#include "IGS_IdleAvoidanceComponent.h"

UIGS_IdleAvoidanceComponent::UIGS_IdleAvoidanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VelocityTreshold = 50.00f;
    this->AvoidanceWeihgtOverride = -1.00f;
}


