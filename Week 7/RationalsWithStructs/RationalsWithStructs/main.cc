/*
* Daniel M. Katz
* CS 570C
* RationalsWithStructs
*
* Demonstration of a rational number data type, using structs.
*/

// Standard C/C++ Headers
#include <iostream>

// Using Declarations
using namespace std;

// Struct Definitions
struct RationalNumber {
    int Numerator;
    int Denominator;
};

// Function Declarations
RationalNumber AddRationals(const RationalNumber& num1, const RationalNumber& num2);

// Entry Point
int main() {
    RationalNumber one_half;
    one_half.Numerator = 1;
    one_half.Denominator = 2;

    RationalNumber one_quarter;
    one_quarter.Numerator = 1;
    one_quarter.Denominator = 4;

    RationalNumber sum = AddRationals(one_half, one_quarter);

    cout << "Sum: " << sum.Numerator << " / " << sum.Denominator << endl;

    system("pause");
    return 0;
}

// Function Definitions
RationalNumber AddRationals(const RationalNumber& num1, const RationalNumber& num2) {
    RationalNumber retval;
    retval.Numerator = (num2.Denominator * num1.Numerator)
        + (num1.Denominator * num2.Numerator);
    retval.Denominator = num1.Denominator * num2.Denominator;

    return retval;
}