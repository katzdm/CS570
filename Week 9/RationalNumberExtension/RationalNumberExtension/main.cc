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
    RationalNumber zero_initially;
    RationalNumber one_half(1, 2);
    RationalNumber two_eighths(one_half + RationalNumber(-1, 4));

    zero_initially = one_half + zero_initially + two_eighths;
    cout << "Sum: " << zero_initially << endl;

    system("pause");
    return 0;
}