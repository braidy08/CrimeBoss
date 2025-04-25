#include "IGS_AIDatabaseFPS.h"
#include "Templates/SubclassOf.h"

UIGS_AIDatabaseFPS::UIGS_AIDatabaseFPS() {
    this->StoryDatabase = NULL;
    this->CanEdit = 0;
}

FIGS_AILoadout UIGS_AIDatabaseFPS::GetLoadout(const FIGS_AILoadoutHolder& inLoadoutHolder, FGameplayTagContainer inLoadoutTags, const TSubclassOf<UIGS_SettingsID> inSettingsOverride, const bool inIsStory, const UObject* inDebugWco) const {
    return FIGS_AILoadout{};
}


