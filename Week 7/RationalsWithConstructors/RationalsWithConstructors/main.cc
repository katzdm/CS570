/*
* Daniel M. Katz
* CS 570C
* RationalsWithClasses
*
* Demonstration of a rational number data type, using classes.
*/

// Standard C/C++ Headers
#include <iostream>

// Application Headers
#include "RationalNumber.h"

// Using Declarations
using namespace std;

// Entry Point
int main() {
    RationalNumber one_half(1, 2);

    RationalNumber zero;
    one_half.IncrementBy(zero);

    cout << "Sum: " << one_half.GetNumerator() << " / " << one_half.GetDenominator() << endl;

    system("pause");
    return 0;
}