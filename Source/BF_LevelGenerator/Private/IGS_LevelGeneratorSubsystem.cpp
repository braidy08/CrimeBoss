#include "IGS_LevelGeneratorSubsystem.h"

UIGS_LevelGeneratorSubsystem::UIGS_LevelGeneratorSubsystem() {
    this->bIsBuildingFinished = false;
}

UIGS_LevelGeneratorSubsystem* UIGS_LevelGeneratorSubsystem::Instance(const UObject* inWorldContextObject) {
    return NULL;
}

void UIGS_LevelGeneratorSubsystem::InitializeRooms_Server(ANavigationData* inNavData) {
}

int32 UIGS_LevelGeneratorSubsystem::GetDefaultSeed() const {
    return 0;
}

FTransform UIGS_LevelGeneratorSubsystem::ComputeTranslationAndRotationTransform(const FIGS_ConnectionPointData& inConnection1, const FIGS_ConnectionPointData& inConnection2) {
    return FTransform{};
}


