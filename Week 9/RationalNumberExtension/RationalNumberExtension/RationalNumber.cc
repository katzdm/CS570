// Declaration Header
#include "RationalNumber.h"

RationalNumber::RationalNumber() {
    this->numerator_ = 0;
    this->denominator_ = 1;
}

RationalNumber::RationalNumber(const RationalNumber& other) {
  this->numerator_ = other.numerator_;
  this->denominator_ = other.denominator_;
}

RationalNumber::RationalNumber(int num, int denom) {
    this->numerator_ = num;
    this->denominator_ = denom;
}

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

RationalNumber RationalNumber::operator+(const RationalNumber& other) const {
  RationalNumber retval(this->numerator_, this->denominator_);
  retval.IncrementBy(other);

  return retval;
}

RationalNumber& RationalNumber::operator=(const RationalNumber& other) {
  this->numerator_ = other.numerator_;
  this->denominator_ = other.denominator_;

  return *this;
}

ostream& operator<<(ostream& stream, const RationalNumber& number) {
  stream << number.GetNumerator() << " / " << number.GetDenominator();
  return stream;
}