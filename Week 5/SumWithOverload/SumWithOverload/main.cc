/*
* Daniel M. Katz
* CS 570C
* SumWithOverload
*
* Demonstration of function overloading, where the overloads vary by number of
* arguments.
*/

// Standard C/C++ Headers
#include <iostream>
#include <string>

// Using Declarations
using namespace std;

// Function Decarations
int Add(int num1, int num2);
int Add(int num1, int num2, int num3);

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

// Function Definitions
int Add(int num1, int num2) {
    return num1 + num2;
}

int Add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}