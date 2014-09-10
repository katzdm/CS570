/*
* Daniel M. Katz
* CS 570C
* BottlesOfBeer (using while-loop)
*
* A "99 bottles of beer on the wall", using a while-loop
*/

// Standard C/C++ Headers
#include <iostream>

// Using Declarations
using namespace std;

// Always try to use constant variables in favor of hard-coded literals
const int kBottlesOfBeer = 99;

int main() {
    int numberOfBottles = kBottlesOfBeer;

    while (numberOfBottles > 1) {
        cout << numberOfBottles << " bottles of beer on the wall, "
             << numberOfBottles << " bottles of beer!" << endl
             << "Take one down! Pass it around!" << endl;

        if (numberOfBottles > 2)
            cout << (numberOfBottles - 1) << " bottles of beer on the wall!" << endl;
        else
            cout << "Only 1 bottle of beer on the wall!" << endl;

        cout << endl;
        numberOfBottles--;
    }
    cout << "1 more bottle of beer on the wall, 1 more bottle of beer!" << endl
         << "Take it down! Pass it around!" << endl
         << "All the beer is gone and everybody is drunk, what a disaster."
         << endl;

    // Terminate the program
    system("pause");
    return 0;
}