#ifndef _RATIONAL_NUMBER_H_

class RationalNumber {
private:
    int numerator_;
    int denominator_;

public:
    // Constructors
    RationalNumber(); // By default, initializes to 0.
    RationalNumber(int num, int denom);

    // Interface
    int GetNumerator() const;
    int GetDenominator() const;
    void SetValue(int num, int denom);
    void IncrementBy(const RationalNumber& other);
};

#endif