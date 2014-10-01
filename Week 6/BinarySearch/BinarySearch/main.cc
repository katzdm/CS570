/*
* Daniel M. Katz
* CS 570C
* BinarySearch
*
* Demonstration of the Binary Search algorithm, using the std::vector type.
*/

// Standard C/C++ Headers
#include <iostream>
#include <vector>

// Using Declarations
using namespace std;

// Function Decarations
int BinarySearch(const vector<int>& number_list, int target);

int main() {
    int number_to_find = 4;
    vector<int> numbers = { 2, 3, 5, 7, 11 };

    // Find the number in the vector.
    int index_of_number = BinarySearch(numbers, number_to_find);

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

int BinarySearch(const vector<int>& number_list, int target) {
    int left_bound = 0;
    int right_bound = number_list.size() - 1;

    while (left_bound <= right_bound) {
        size_t position = (left_bound + right_bound) / 2;
        int value_at_position = number_list[position];

        if (value_at_position == target) {
            return position;
        } else if (value_at_position < target) {
            left_bound = position + 1;
        } else {
            right_bound = position - 1;
        }
    }
    return -1;
}