#ifndef _RATIONAL_NUMBER_H_

class RationalNumber {
private:
    int numerator_;
    int denominator_;

public:
    int GetNumerator() const;
    int GetDenominator() const;
    void SetValue(int num, int denom);
    void IncrementBy(const RationalNumber& other);
};

#endif