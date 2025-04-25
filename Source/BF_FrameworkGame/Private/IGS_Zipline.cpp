#include "IGS_Zipline.h"
#include "Components/SceneComponent.h"
#include "IGS_ZiplineInteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Zipline::AIGS_Zipline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bTwoWay = false;
    this->ZiplineInteractiveComponent = CreateDefaultSubobject<UIGS_ZiplineInteractiveComponent>(TEXT("ZiplineInteractiveComponent"));
    this->EndPointZiplineInteractiveComponent = CreateDefaultSubobject<UIGS_ZiplineInteractiveComponent>(TEXT("EndPointZiplineInteractiveComponent"));
    this->ZiplineInteractiveComponent->SetupAttachment(RootComponent);
    this->EndPointZiplineInteractiveComponent->SetupAttachment(RootComponent);
}

TArray<AIGS_GameCharacterFramework*> AIGS_Zipline::GetUsers() {
    return TArray<AIGS_GameCharacterFramework*>();
}

void AIGS_Zipline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_Zipline, Users);
}


