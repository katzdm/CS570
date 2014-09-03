/*
 * Daniel M. Katz
 * CS 570C
 * RectangleFromFile
 *
 * Prompts the user for a file, reads two numbers from it that represent a
 * length and width, and computes the area of the rectangle with the given
 * dimensions. Ideally, we would like to handle error cases, such as the file
 * not existing, or the user providing invalid dimensions, but we have not
 * yet learned any mechanisms for this sort of "branching" behavior - that is,
 * for executing different code depending on the truth or falsehood of a given
 * condition which is not known until runtime.
*/

// Standard C/C++ Headers
#include <fstream>
#include <iostream>     // Needed for cout, cin, endl, and system()
#include <string>       // Needed for std::string datatype

// Entry point for the program - here is where execution begins!
int main() {
    // Variable declarations
    double area;
    double length, width;
    std::string filename;

    // Requesting a file from the user
    std::cout << "Please provide a filename: ";
    std::cin >> filename;

    // Open a stream to the file
    std::ifstream data_file(filename);

    // Extract the width and height from the file stream
    data_file >> length;
    std::cout << "Length: " << length << std::endl;
    data_file >> width;
    std::cout << "Width: " << width << std::endl;

    // Close the file
    data_file.close();

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
