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
    RationalNumber one_half;
    one_half.SetValue(1, 2);

    RationalNumber one_quarter;
    one_quarter.SetValue(1, 4);

    one_half.IncrementBy(one_quarter);

    cout << "Sum: " << one_half.GetNumerator() << " / " << one_half.GetDenominator() << endl;

    system("pause");
    return 0;
}