#include "IGS_PlayerStartGroup.h"

AIGS_PlayerStartGroup::AIGS_PlayerStartGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsActive = true;
    this->IsForcedDuringMatch = false;
    this->IsRandom = true;
}


