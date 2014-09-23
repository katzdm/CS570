/*
* Daniel M. Katz
* CS 570C
* SwapIntegers (Function Templates)
*
* Use of a function template to swap objects of any type.
*/

// Standard C/C++ Headers
#include <iostream>
#include <string>

// Using Declarations
using namespace std;

// Function Decarations
template <typename T>
void Swap(T& first, T& second);

int main() {
    int firstNumber = 1, secondNumber = 2;
    string firstString = "FIRST", secondString = "SECOND";

    // Output initial values.
    cout << "Before swap" << endl;
    cout << "First: " << firstNumber << "; Second: " << secondNumber << endl;
    cout << "First: " << firstString << "; Second: " << secondString << endl;

    // Perform the swap!
    Swap<int>(firstNumber, secondNumber);
    Swap<string>(firstString, secondString);

    // Output swapped values.
    cout << endl << "After swap" << endl;
    cout << "First: " << firstNumber << "; Second: " << secondNumber << endl;
    cout << "First: " << firstString << "; Second: " << secondString << endl;

    // Pause and terminate the program.
    cout << endl;
    system("pause");
    return 0;
}

// Function Definitions
template<typename T>
void Swap(T& first, T& second) {
    T tempValue = first;

    first = second;
    second = tempValue;
}