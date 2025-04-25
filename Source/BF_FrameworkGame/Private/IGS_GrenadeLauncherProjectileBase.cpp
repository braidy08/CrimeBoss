#include "IGS_GrenadeLauncherProjectileBase.h"
#include "AkComponent.h"
#include "Components/PointLightComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_GrenadeLauncherProjectileBase::AIGS_GrenadeLauncherProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    this->GrenadeParticle = NULL;
    this->NiagaraGrenadeParticle = NULL;
    this->ExplosionSoundAkEvent = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->LightFlashTime = 0.20f;
    this->ImpactDistance = 150.00f;
    this->bMakeNoiseAndEvent = true;
    this->mR_bIsExploded = false;
    this->ExplosionLight->SetupAttachment(ThrowableMesh);
    this->AkComponent->SetupAttachment(ThrowableMesh);
}

void AIGS_GrenadeLauncherProjectileBase::PlayEffect_Implementation() {
}

void AIGS_GrenadeLauncherProjectileBase::OnExplosionSphereTrace_Implementation(AActor* inActor) const {
}

void AIGS_GrenadeLauncherProjectileBase::OnExplosion_Implementation() {
}

void AIGS_GrenadeLauncherProjectileBase::Multicast_ExplodeEffect_Implementation() {
}

bool AIGS_GrenadeLauncherProjectileBase::HasExploded() const {
    return false;
}

float AIGS_GrenadeLauncherProjectileBase::GetOuterEffectRadius() const {
    return 0.0f;
}

void AIGS_GrenadeLauncherProjectileBase::Explode() {
}

void AIGS_GrenadeLauncherProjectileBase::AffectPlayer_Implementation(const AIGS_GameCharacterFramework* inPlayer) const {
}

void AIGS_GrenadeLauncherProjectileBase::AffectNPC_Implementation(const AIGS_GameCharacterFramework* inNPC) const {
}

void AIGS_GrenadeLauncherProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_GrenadeLauncherProjectileBase, mR_bIsExploded);
}


