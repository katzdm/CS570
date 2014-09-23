/*
* Daniel M. Katz
* CS 570C
* ReverseList
*
* Takes a list of numbers from the user, and outputs it in reverse.
*/

// Standard C/C++ Headers
#include <iostream>
#include <vector>

// Using Declarations
using namespace std;

int GetNumberFromUser();

int main() {
    // Vector of integers to hold user's inputs.
    vector<int> inputs;

    // Get numbers from the user.
    while (int number = GetNumberFromUser()) {
        inputs.push_back(number);
    }

    // Output the numbers in reverse.
    cout << "Reversed: ";
    for (int index = inputs.size() - 1; index >= 0; index--) {
        cout << inputs[index] << " ";
    }
    cout << endl;

    // Pause and terminate the program.
    system("pause");
    return 0;
}

int GetNumberFromUser() {
    int input;

    // Prompt the user.
    cout << "Enter a number (or '0' to finish): ";
    cin >> input;

    return input;
}