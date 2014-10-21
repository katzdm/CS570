#ifndef _RATIONAL_NUMBER_H_

// Standard C/C++ Headers
#include <iostream>
using std::ostream;

class RationalNumber {
private:
    int numerator_;
    int denominator_;

public:
    // Constructors
    RationalNumber(); // By default, initializes to 0.
    RationalNumber(const RationalNumber& other);
    RationalNumber(int num, int denom);

    // Interface
    int GetNumerator() const;
    int GetDenominator() const;
    void SetValue(int num, int denom);
    void IncrementBy(const RationalNumber& other);

    // Operator Overloads
    RationalNumber operator+(const RationalNumber& other) const;
    RationalNumber& operator=(const RationalNumber& other);
};

ostream& operator<<(ostream& stream, const RationalNumber& number);

#endif