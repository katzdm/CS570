// Declaration Header
#include "RationalNumber.h"

int RationalNumber::GetNumerator() const {
    return this->numerator_;
}

int RationalNumber::GetDenominator() const {
    return this->denominator_;
}

void RationalNumber::SetValue(int num, int denom) {
    this->numerator_ = num;
    this->denominator_ = denom;
}

void RationalNumber::IncrementBy(const RationalNumber& other) {
    this->numerator_ = (other.denominator_ * this->numerator_)
        + (this->denominator_ * other.numerator_);
    this->denominator_ = this->denominator_ * other.denominator_;
}