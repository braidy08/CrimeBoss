#include "IGS_TextUtils.h"

UIGS_TextUtils::UIGS_TextUtils() {
}

FText UIGS_TextUtils::JoinTextArrayNatural(const TArray<FText>& inTexts, const EMETA_ConditionExprOperator inConjuction) {
    return FText::GetEmpty();
}

FText UIGS_TextUtils::JoinTextArray(const TArray<FText>& inTexts, const FString& inSeparator) {
    return FText::GetEmpty();
}

EMETA_OrderOfMagnitude UIGS_TextUtils::GetOrderOfMagniture(const int32& InValue) {
    return EMETA_OrderOfMagnitude::None;
}

FText UIGS_TextUtils::AsDollars(const int32& InValue, const bool inAlwaysSign, const bool inShortFormat) {
    return FText::GetEmpty();
}


