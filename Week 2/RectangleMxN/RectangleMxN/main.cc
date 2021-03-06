/*
* Daniel M. Katz
* CS 570C
* RectangleMxN
*
* Prompts the user for a two numbers that represent a length and width,
* then computes the area of the rectangle with the given dimensions.
*/

// Standard C/C++ Headers
#include <iostream>     // Needed for cout, cin, endl, and system()

// Entry point for the program - here is where execution begins!
int main() {
    // Variable declarations
    double area;
    double length, width;

    // Requesting values to the rectangle's dimensions from the user
    std::cout << "Length: ";
    std::cin >> length;
    std::cout << "Width: ";
    std::cin >> width;

    // Computation of the total area
    area = length * width;

    // Output the results
    std::cout << std::endl << "The area of a rectangle with a ";
    std::cout << "length of " << length << " and a width of " << width
        << " is " << area << "." << std::endl;

    // Finish executing the program
    system("pause");
    return 0;           // Returning "0" indicates "no error"
}
