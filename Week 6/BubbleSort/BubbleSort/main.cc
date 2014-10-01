/*
* Daniel M. Katz
* CS 570C
* BubbleSort
*
* Demonstration of the Bubble Sort algorithm, using the std::vector type.
*/

// Standard C/C++ Headers
#include <iostream>
#include <vector>

// Using Declarations
using namespace std;

// Function Decarations
void BubbleSort(vector<int>& number_list);
void SwapValues(int& first_value, int& second_value);
void OutputVector(const vector<int>& number_list);

int main() {
    int number_to_find = 4;
    vector<int> numbers = { 11, 7, 5, 19, 17, 13, 2 };

    // Output the unsorted numbers.
    cout << "Before sorting: ";
    OutputVector(numbers);
    cout << endl;

    // Sort the numbers in the vector.
    BubbleSort(numbers);

    // Output the result.
    cout << "After sorting: ";
    OutputVector(numbers);
    cout << endl;

    // Pause and terminate the program.
    system("pause");
    return 0;
}

void BubbleSort(vector<int>& number_list) {
    // If there are no elements, then do nothing.
    if (number_list.size() > 0) {
        // It is an invariant for Bubble Sort that after k passes, the first k elements will be
        // sorted in their correct positions.
        for (size_t index_to_sort = 0; index_to_sort < number_list.size() - 1; index_to_sort++) {
            // Iterate backwards through the subvector, swapping any adjacent out-of-order elements.
            // Do not bother checking elements that have already been sorted.
            for (size_t index_to_check = number_list.size() - 1; index_to_check > index_to_sort; index_to_check--) {
                if (number_list[index_to_check] < number_list[index_to_check - 1]) {
                    SwapValues(number_list[index_to_check], number_list[index_to_check - 1]);
                }
            }
        }
    }
}

void SwapValues(int& first_value, int& second_value) {
    int temp = first_value;

    first_value = second_value;
    second_value = temp;
}

void OutputVector(const vector<int>& number_list) {
    cout << "(";
    if (number_list.size() > 0) {
        for (int i = 0; i < number_list.size() - 1; i++) {
            cout << number_list[i] << ", ";
        }
        cout << number_list[number_list.size() - 1];
    }
    cout << ")";
}