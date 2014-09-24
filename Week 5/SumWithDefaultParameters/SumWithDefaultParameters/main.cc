/*
* Daniel M. Katz
* CS 570C
* SumWithDefaultParameters
*
* Demonstration of use of default parameters to facilitate the reuse of code.
*/

// Standard C/C++ Headers
#include <iostream>
#include <string>

// Using Declarations
using namespace std;

// Function Decarations
int Add(int num1, int num2, int num3 = 0);

int main() {
    int firstNum = 2, secondNum = 4, thirdNum = 6;

    cout << firstNum << " + " << secondNum << " = "
        << Add(firstNum, secondNum) << endl;

    cout << firstNum << " + " << secondNum << " + " << thirdNum << " = "
        << Add(firstNum, secondNum, thirdNum) << endl << endl;

    // Pause and terminate the program.
    system("pause");
    return 0;
}

int Add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}