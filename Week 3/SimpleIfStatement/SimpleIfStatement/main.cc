/*
 * Daniel M. Katz
 * CS 570C
 * SimpleIfStatement
 *
 * Example of a simple if-statement: Prompts the user for a number, and prints
 * an error if the user gave invalid input.
 */

// Standard C/C++ Headers
#include <iostream>

// Using declarations
using namespace std;

int main() {
    // Variables to hold user's input
    int number;

    // Query the user for a number
    cout << "Enter a number: ";
    cin >> number;

    // Output text to the user
    cout << endl << "You entered " << number << ". ";
    if (number > 10)
        // This text will only be printed if the input was greater than 10.
        cout << "It is greater than 10.";
    cout << endl;

    // Terminate the program
    system("pause");
    return 0;
}