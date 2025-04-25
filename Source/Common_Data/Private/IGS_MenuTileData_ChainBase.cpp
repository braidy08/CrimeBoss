#include "IGS_MenuTileData_ChainBase.h"

UIGS_MenuTileData_ChainBase::UIGS_MenuTileData_ChainBase() {
}

void UIGS_MenuTileData_ChainBase::SetData(const FIGS_ChainMission& inData) {
}

EIGS_ChainType UIGS_MenuTileData_ChainBase::GetType() {
    return EIGS_ChainType::UrbanLegend;
}

EIGS_ChainDifficulty UIGS_MenuTileData_ChainBase::GetDifficulty() {
    return EIGS_ChainDifficulty::Unknown;
}

FIGS_ChainMission UIGS_MenuTileData_ChainBase::GetData() {
    return FIGS_ChainMission{};
}


