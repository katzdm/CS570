/*
* Daniel M. Katz
* CS 570C
* Rectangle12x6
*
* Computes the area of a 12x6 rectangle...Fairly useless in practice,
* but not a bad first program to start the course with!
* Just try to use github 
* Just try to use github
*/

// Standard C/C++ Headers
#include <iostream>     // Needed for cout, endl, and system()

// Entry point for the program - here is where execution begins!
int main() {
    // Variable declarations
    int area;
    int length, width;

    // Assigning values to the rectangle's dimensions
    length = 12;    // Length in inches
    width = 6;      // Width in inches

    // Computation of the total area
    area = length * width;

    // Output the results
    std::cout << "The area of a rectangle with a ";
    std::cout << "length of " << length << " and a width of " << width
        << " is " << area << "." << std::endl;

    // Finish executing the program
    system("pause");    // "Press any key to continue..."
    return 0;           // Returning "0" indicates "no error"
}
