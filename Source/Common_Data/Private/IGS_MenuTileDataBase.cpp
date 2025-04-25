#include "IGS_MenuTileDataBase.h"

UIGS_MenuTileDataBase::UIGS_MenuTileDataBase() {
}

void UIGS_MenuTileDataBase::SetIsOwned(bool inIsOwned) {
}

void UIGS_MenuTileDataBase::SetIsNew(bool inIsNew) {
}

void UIGS_MenuTileDataBase::SetIsDLC(bool inIsDLC) {
}

EIGS_MenuTileSize UIGS_MenuTileDataBase::GetTileSize() {
    return EIGS_MenuTileSize::FullSize;
}

FText UIGS_MenuTileDataBase::GetName() {
    return FText::GetEmpty();
}

bool UIGS_MenuTileDataBase::GetIsOwned() {
    return false;
}

bool UIGS_MenuTileDataBase::GetIsNew() {
    return false;
}

bool UIGS_MenuTileDataBase::GetIsDLC() {
    return false;
}

FIGS_MenuTileImageOffset UIGS_MenuTileDataBase::GetImageOffset() {
    return FIGS_MenuTileImageOffset{};
}

TSoftObjectPtr<UTexture2D> UIGS_MenuTileDataBase::GetImage() {
    return NULL;
}

FGameplayTag UIGS_MenuTileDataBase::GetIdTag() {
    return FGameplayTag{};
}

FGameplayTag UIGS_MenuTileDataBase::GetEntitlementTag() {
    return FGameplayTag{};
}

FText UIGS_MenuTileDataBase::GetDescription() {
    return FText::GetEmpty();
}


