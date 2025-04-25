#include "IGS_MenuTileData_UrbanLegends.h"

UIGS_MenuTileData_UrbanLegends::UIGS_MenuTileData_UrbanLegends() {
    this->bIsUnlocked = false;
    this->bIsActiveUrbanLegend = false;
    this->bIsCompleted = false;
    this->HighScore = -1;
    this->HighestStarRating = -1;
}

void UIGS_MenuTileData_UrbanLegends::SetIsUnlocked(bool inIsUnlocked) {
}

void UIGS_MenuTileData_UrbanLegends::SetIsCompleted(bool inIsCompleted) {
}

void UIGS_MenuTileData_UrbanLegends::SetIsActiveUrbanLegend(bool inIsActive) {
}

void UIGS_MenuTileData_UrbanLegends::SetHighScore(int32 inHighScore) {
}

void UIGS_MenuTileData_UrbanLegends::SetHighestStarRating(int32 inHighestStarRating) {
}

bool UIGS_MenuTileData_UrbanLegends::IsUnlocked() const {
    return false;
}

bool UIGS_MenuTileData_UrbanLegends::IsCompleted() const {
    return false;
}

bool UIGS_MenuTileData_UrbanLegends::IsActiveUrbanLegend() const {
    return false;
}

int32 UIGS_MenuTileData_UrbanLegends::GetHighScore() const {
    return 0;
}

int32 UIGS_MenuTileData_UrbanLegends::GetHighestStarRating() const {
    return 0;
}


