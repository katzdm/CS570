// Standard C/C++ Headers
#include <iostream>     // cin, cout, endl

// Using Declarations
using namespace std;

// Function Declarations
double ComputeArea(double width, double height);
void OutputArea(double area);

int main() {
    double user_width;
    double user_height;

    // Prompt the user for a width and height.
    cout << "Enter a width: ";
    cin >> user_width;
    cout << "Enter a height: ";
    cin >> user_height;

    // This is an example of a "nested" function call - It is possible because
    // ComputeArea()'s "double" return-type makes the function-call expression
    // ComputeArea(...) a double-valued expression; thus we can pass its
    // evaluated result as the argument corresponding to the parameter "area"
    // in the function OutputArea()!
    OutputArea(ComputeArea(user_width, user_height));

    // Pause and terminate the program.
    system("pause");
    return 0;
}

// Function Definitions
double ComputeArea(double width, double height) {
    return width * height;
}

void OutputArea(double area) {
    cout << "The area is " << area << "." << endl;
}