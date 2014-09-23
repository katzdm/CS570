/*
* Daniel M. Katz
* CS 570C
* SwapIntegers (Separate Functions)
*
* Demonstration of the neccessity for function overloading!
*/

// Standard C/C++ Headers
#include <iostream>
#include <string>

// Using Declarations
using namespace std;

// Function Decarations
void SwapInts(int& first, int& second);
void SwapStrings(string& first, string& second);

int main() {
    int firstNumber = 1, secondNumber = 2;
    string firstString = "FIRST", secondString = "SECOND";

    // Output initial values.
    cout << "Before swap" << endl;
    cout << "First: " << firstNumber << "; Second: " << secondNumber << endl;
    cout << "First: " << firstString << "; Second: " << secondString << endl;

    // Perform the swap!
    SwapInts(firstNumber, secondNumber);
    SwapStrings(firstString, secondString);

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
void SwapInts(int& first, int& second) {
    int tempValue = first;

    first = second;
    second = tempValue;
}

void SwapStrings(string& first, string& second) {
    string tempValue = first;

    first = second;
    second = tempValue;
}