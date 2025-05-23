#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "META_LevelActorsManagerComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_LevelActorsManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMETA_LevelActorsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UnRegister(FGameplayTag inTag, UObject* inObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Register(FGameplayTag inTag, UObject* inObject);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetRandom(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetFirst(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetAllWithChildren(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetAll(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Contains(const FGameplayTag inTag) const;
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

