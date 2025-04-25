#include "IGS_WaitForWeaponIcon.h"
#include "Templates/SubclassOf.h"

UIGS_WaitForWeaponIcon::UIGS_WaitForWeaponIcon() {
    this->m_WeaponObject = NULL;
}

UIGS_WaitForWeaponIcon* UIGS_WaitForWeaponIcon::WaitForWeaponIcon(UObject* inWorldContextObject, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponObject, TSoftObjectPtr<UIGS_WeaponSkinData> inSkin) {
    return NULL;
}

void UIGS_WaitForWeaponIcon::ExecuteOnIconReady(TSoftObjectPtr<UTexture2D> inWeaponIcon) {
}


