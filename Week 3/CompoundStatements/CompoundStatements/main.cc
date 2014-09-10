/*
* Daniel M. Katz
* CS 570C
* CompoundStatements
*
* Example of a simple if-else statement, with compound statements: Prompts the
* user for a number, and prints different text depending on if the number is
* greater than 10.
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
    if (number > 10 && number < 500) {
        // This code will only be executed if the input was greater than 10.
        number += 2;
        cout << "It is greater than 10. New value: " << number;
    } else if (number <= 10) {
        // This code will only be executed if the input was less than or equal
        // to 10.
        number -= 2;
        cout << "It was less than or equal to 10. New value: " << number;
    } else { // number >= 500
        cout << "Dude, stop entering such large numbers.";
    }
    cout << endl;

    // Terminate the program
    system("pause");
    return 0;
}