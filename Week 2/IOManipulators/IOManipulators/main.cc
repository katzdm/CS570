/*
 * Daniel M. Katz
 * CS 570C
 * IOManipulators
 *
 * Examples of use of different I/O manipulators, for modifying how floating
 * point variables are output.
 *
*/

// Standard C/C++ Headers
#include <iomanip>
#include <iostream>

int main() {
    // Variable declarations
    double value = 12.666666;

    // Default formatting
    std::cout << "Value: " << value << std::endl;

    // Fixed-point precision of 2, always show decimal point.
    std::cout << std::setiosflags(std::ios::fixed | std::ios::showpoint)
              << std::setprecision(2);
    std::cout << "Value: " << value << std::endl;

    // Fixed-point precision of 3, always show decimal point.
    std::cout << std::setiosflags(std::ios::fixed | std::ios::showpoint)
        << std::setprecision(3);
    std::cout << "Value: " << value << std::endl;

    // Output 0 to show effect of std::ios::showpoint.
    std::cout << "Zero: " << 0.0 << std::endl;

    // Output 0 again, this time without the ios flags set.
	double test = 0.0;
	std::cout << "Before: " << test << std::endl;
    std::cout << std::resetiosflags(std::ios::fixed | std::ios::showpoint);
    std::cout << "Zero: " << 0.0 << std::endl;
	std::cout << "After: " << test << std::endl;
    
    system("pause");
    return 0;   // Return 0 to indicate that no error occurred.
}