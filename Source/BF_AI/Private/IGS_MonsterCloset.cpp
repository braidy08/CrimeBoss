#include "IGS_MonsterCloset.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_MonsterCloset::AIGS_MonsterCloset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->helpersBox = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    this->AntiStuckTrigger = NULL;
    this->TimeToCheckTrigger = 10.00f;
    this->MaxDistanceToPlayableArea = 3000.00f;
    this->DistanceToPlayableArea = -1.00f;
    this->CheckValidityInRuntime = true;
    this->helpersBox->SetupAttachment(RootComponent);
}

void AIGS_MonsterCloset::OnTriggerOverlapEnd(AActor* inOverlappedActor, AActor* inOtherActor) {
}

void AIGS_MonsterCloset::OnTriggerOverlapBegin(AActor* inOverlappedActor, AActor* inOtherActor) {
}


