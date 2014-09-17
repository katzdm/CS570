/*
* Daniel M. Katz
* CS 570C
* SqrtExample
*
* Demonstration of how to declare, define, and call a user-defined function.
* This example abstracts the logic for determining the area of a rectangle
* int a function.
*/

// Standard C/C++ Headers
#include <iostream>     // cin, cout, endl

// Using Declarations
using namespace std;

// Function Declarations
double ComputeArea(double width, double height);

int main() {
    double user_width;
    double user_height;

    // Prompt the user for a width and height.
    cout << "Enter a width: ";
    cin >> user_width;
    cout << "Enter a height: ";
    cin >> user_height;

    // Compute the area, and output it to the user.
    cout << "The area is " << ComputeArea(user_width, user_height) << "." << endl;

    // Pause and terminate the program.
    system("pause");
    return 0;
}

// Function Definitions
double ComputeArea(double width, double height) {
    return width * height;
}