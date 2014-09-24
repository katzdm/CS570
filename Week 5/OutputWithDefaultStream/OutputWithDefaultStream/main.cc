/*
* Daniel M. Katz
* CS 570C
* OutputWithDefaultStream
*
* Outputs to a file if one is provided by the user, or to stdout otherwise.
*/

// Standard C/C++ Headers
#include <fstream>
#include <iostream>
#include <string>

// Using Declarations
using namespace std;

// Function Decarations
void Output(string str, ostream& out = cout);

int main() {
    string filename;
    const string kStringToOutput = "Hello, world!";

    // Prompt the user for a filename.
    cout << "Enter a filename (or \"cout\" to print to screen): ";
    cin >> filename;

    // Output!
    if (filename != "cout") {
        Output(kStringToOutput, ofstream(filename));
    } else {
        Output(kStringToOutput);
    }

    // Pause and terminate the program.
    system("pause");
    return 0;
}

// Function Definitions
void Output(string str, ostream& out) {
    out << str << endl;
}