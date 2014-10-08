/*
* Daniel M. Katz
* CS 570C
* SequentialSearch
*
* Demonstration of the Sequential Search algorithm, using the std::vector type.
*/

// Standard C/C++ Headers
#include <iostream>
#include <vector>

// Using Declarations
using namespace std;

// Function Decarations
int SequentialSearch(const vector<int>& number_list, int target);

int main() {
    int number_to_find = 7;
    vector<int> numbers = {2, 3, 5, 7, 11};

    // Find the number in the vector.
    int index_of_number = SequentialSearch(numbers, number_to_find);

    // Output the result.
    if (index_of_number < 0) {
        cout << number_to_find << " was not found in the vector." << endl;
    } else {
        cout << number_to_find << " found at position " << index_of_number
            << "." << endl;
    }

    // Pause and terminate the program.
    system("pause");
    return 0;
}

int SequentialSearch(const vector<int>& number_list, int target) {
    for (size_t index = 0; index < number_list.size(); index++) {
        if (target == number_list[index]) {
            return index;
        }
    }
    return -1;
}