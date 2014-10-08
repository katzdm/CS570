/*
* Daniel M. Katz
* CS 570C
* SelectionSort
*
* Demonstration of the Selection Sort algorithm, using the std::vector type.
*/

// Standard C/C++ Headers
#include <iostream>
#include <vector>

// Using Declarations
using namespace std;

// Function Decarations
void SelectionSort(vector<int>& number_list);
void SwapValues(int& first_value, int& second_value);
void OutputVector(const vector<int>& number_list);

int main() {
    int number_to_find = 4;
    vector<int> numbers = {11, 7, 5, 19, 17, 13, 2};

    // Output the unsorted numbers.
    cout << "Before sorting: ";
    OutputVector(numbers);
    cout << endl;

    // Sort the numbers in the vector.
    SelectionSort(numbers);

    // Output the result.
    cout << "After sorting: ";
    OutputVector(numbers);
    cout << endl;

    // Pause and terminate the program.
    system("pause");
    return 0;
}

void SelectionSort(vector<int>& number_list) {
    // If there are no elements, then do nothing.
    if (number_list.size() > 0) {
        // Given a vector of n values, each k-th iteration of the loop chooses the smallest value
        // of those with indices k, k+1, ..., n; and swaps it with the k-th value: Thus during
        // each k-th iteration, the first (k-1) values are already in their sorted positions.
        for (size_t index_to_sort = 0; index_to_sort < number_list.size() - 1; index_to_sort++) {
            // Assume that the value already in front is the smallest.
            size_t index_of_smallest = index_to_sort;

            // Determine the true smallest value in the subvector.
            for (size_t index_to_check = index_to_sort + 1; index_to_check < number_list.size(); index_to_check++) {
                if (number_list[index_to_check] < number_list[index_of_smallest]) {
                    index_of_smallest = index_to_check;
                }
            }

            // Put the smallest value in the front.
            SwapValues(number_list[index_of_smallest], number_list[index_to_sort]);
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