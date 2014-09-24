/*
* Daniel M. Katz
* CS 570C
* SwapIntegers (Function Overloading)
*
* Overloads the function name Swap() to handle either int's or string's.
*/

// Standard C/C++ Headers
#include <iostream>
#include <string>

// Using Declarations
using namespace std;

// Function Decarations
void Swap(int& first, int& second);
void Swap(string& first, string& second);

int main() {
    int firstNumber = 1, secondNumber = 2;
    string firstString = "FIRST", secondString = "SECOND";

    // Output initial values.
    cout << "Before swap" << endl;
    cout << "First: " << firstNumber << "; Second: " << secondNumber << endl;
    cout << "First: " << firstString << "; Second: " << secondString << endl;

    // Perform the swap!
    Swap(firstNumber, secondNumber);
    Swap(firstString, secondString);

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
void Swap(int& first, int& second) {
    int tempValue = first;

    first = second;
    second = tempValue;
}

void Swap(string& first, string& second) {
    string tempValue = first;

    first = second;
    second = tempValue;
}