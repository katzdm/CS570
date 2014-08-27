// Standard C/C++ Headers
#include <iostream>     // Needed for cout, endl, and system()

// Entry point for the program - here is where execution begins!
int main(void) {
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
