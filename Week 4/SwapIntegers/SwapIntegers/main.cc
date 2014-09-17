/*
* Daniel M. Katz
* CS 570C
* SwapIntegers
*
* Demonstration of a user-defined function that passes its arguments by
* reference.
*/

// Standard C/C++ Headers
#include <iostream>

// Using Declarations
using namespace std;

// Function Decarations
void Swap(int& first, int& second);
void OutputValues(int first, int second);

int main() {
    int firstNumber = 5;
    int secondNumber = 12;

    // Output initial values.
    cout << "Before swap" << endl;
    OutputValues(firstNumber, secondNumber);

    // Perform the swap!
    Swap(firstNumber, secondNumber);

    // Output swapped values.
    cout << endl << "After swap" << endl;
    OutputValues(firstNumber, secondNumber);

    // Pause and terminate the program.
    cout << endl;
    system("pause");
    return 0;
}

// Function Definitions
void Swap(int& first, int& second) {
    int tempValue = first;
    
    first = second;
    second = tempValue;
}

void OutputValues(int first, int second) {
    cout << "First: " << first << endl;
    cout << "Second: " << second << endl;
}