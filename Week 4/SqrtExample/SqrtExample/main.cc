/*
* Daniel M. Katz
* CS 570C
* SqrtExample
*
* Demonstration of how to call a pre-defined function (in this case, std::sqrt)
* in C++.
*/

// Standard C/C++ Headers
#include <cmath>
#include <iostream>

// Using declarations
using namespace std;

int main() {
    double input;
    
    // Prompt the user for a number.
    cout << "Enter a number: ";
    cin >> input;

    // Print the number's square root!
    cout << "The square root of " << input << " is " << sqrt(input) << "." << std::endl;

    // Pause and terminate the program.
    system("pause");
    return 0;
}