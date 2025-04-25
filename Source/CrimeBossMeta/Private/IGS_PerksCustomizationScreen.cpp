#include "IGS_PerksCustomizationScreen.h"

UIGS_PerksCustomizationScreen::UIGS_PerksCustomizationScreen() {
    this->MultiplayerStashManagerComponent = NULL;
    this->MultiplayerBlackMarketManagerComponent = NULL;
    this->MultiplayerCrewManagerComponent = NULL;
    this->MultiplayerFinanceManagerComopnent = NULL;
    this->UnlockManager = NULL;
    this->SelectedBossCharacter = NULL;
}

void UIGS_PerksCustomizationScreen::SetGrouppedPerks() {
}

UMETA_Perk* UIGS_PerksCustomizationScreen::GetOwnedPerkMaxTier(FIGS_PerkGroup& InGroup) const {
    return NULL;
}

TArray<FIGS_PerkGroup> UIGS_PerksCustomizationScreen::GetGroupedPerks(TArray<UMETA_Perk*> inPerks) const {
    return TArray<FIGS_PerkGroup>();
}


