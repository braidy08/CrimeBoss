#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "EIGS_MenuTileSelectionType.h"
#include "EIGS_MenuTileSize.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "IGS_ItemConfirmedDelegate.h"
#include "IGS_ItemSeenDelegate.h"
#include "IGS_ItemSelectedDelegate.h"
#include "IGS_MenuTileWidget.generated.h"

class UBorder;
class UIGS_MenuTileDataBase;
class UIGS_SelectionLabelWidget;
class UImage;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USpacer;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_MenuTileWidget : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ItemSelected OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ItemConfirmed OnItemConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ItemSeen OnItemSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FullSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BackgroundImageMaterialParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MenuTileSelectionType SelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoldTicksPerSecond;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* SizeSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SelectionLabelWidget* SelectionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* HoldBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BackgroundImageMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MenuTileDataBase* ItemData;
    
public:
    UIGS_MenuTileWidget();

    UFUNCTION(BlueprintCallable)
    void SetSelectionType(EIGS_MenuTileSelectionType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetItemData(UIGS_MenuTileDataBase* inItemData);
    
    UFUNCTION(BlueprintCallable)
    void SetIsItemSelected(bool inIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHoldForceDisabled(bool inHoldForceDisabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshSizeSpacer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsItemSelectedChanged(bool inIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldTick_Internal(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldStarted_Internal();
    
    UFUNCTION(BlueprintCallable)
    void OnHoldStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldFinished_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldCancelled_Internal();
    
    UFUNCTION(BlueprintCallable)
    void OnHoldCancelled();
    
private:
    UFUNCTION(BlueprintCallable)
    FEventReply OnHoldBorderMouseButtonUp(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnHoldBorderMouseButtonDown(FGeometry Geometry, const FPointerEvent& PointerEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitVisuals();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitMaterials();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleReleasedKeyboard();
    
    UFUNCTION(BlueprintCallable)
    void HandlePressedKeyboard();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleHoldTick();
    
    UFUNCTION(BlueprintCallable)
    void HandleHoldFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MenuTileSize GetTileSize() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTextureAspectRatio(UTexture2D* inTexture);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_MenuTileSelectionType GetSelectionType() const;
    
    UFUNCTION(BlueprintCallable)
    UIGS_MenuTileDataBase* GetItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsItemSelected() const;
    
};

