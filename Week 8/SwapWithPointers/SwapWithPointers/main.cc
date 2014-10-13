/*
* Daniel M. Katz
* CS 570C
* SwapIntegers
*
* Demonstration of a user-defined function that passes its arguments as
* pointers, using reference and de-reference operators in the process.
*/

// Standard C/C++ Headers
#include <iostream>

// Using Declarations
using namespace std;

// Function Decarations
void Swap(int& first, int& second);  // Swap via references
void Swap(int* first, int* second);  // Swap via pointers
void OutputValues(int first, int second);

int main() {
  int firstNumber = 5;
  int secondNumber = 12;

  // Output initial values.
  cout << "Before swap" << endl;
  OutputValues(firstNumber, secondNumber);

  // Perform the swap!
  Swap(firstNumber, secondNumber);

  // Output swapped values.
  cout << endl << "After swap" << endl;
  OutputValues(firstNumber, secondNumber);

  // Perform the swap again, with pointers!
  Swap(&firstNumber, &secondNumber);

  // Output sapped values.
  cout << endl << "After swap" << endl;
  OutputValues(firstNumber, secondNumber);

  // Pause and terminate the program.
  cout << endl;
  system("pause");
  return 0;
}

// Function Definitions
void Swap(int& first, int& second) {
  int tempValue = first;

  first = second;
  second = tempValue;
}

void Swap(int* first, int* second) {
  // Set "tempValue" to the value held at the location specified by "first".
  int tempValue = *first;

  // Set the value located at the address specified by "first" to the value
  // located at the address specified by "second".
  *first = *second;
  *second = tempValue;

  cout << endl;
  cout << "First (int*): " << first << endl;
  cout << "Second (int*): " << second << endl;
}

void OutputValues(int first, int second) {
  cout << "First: " << first << endl;
  cout << "Second: " << second << endl;
}