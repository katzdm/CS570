/*
* Daniel M. Katz
* CS 570C
* LinkedList
*
* Demonstration of dynamic memory allocation: Linked Lists!
*/

// Standard C/C++ Headers
#include <iostream>

// Application Headers
#include "LinkedList.h"

// Using Declarations
using namespace std;

int main() {
  // Create a Linked List of integers, with the initial value of the first node
  // set to zero.
  LinkedList<int> list_head = 0;

  // Get a pointer, "node", to the first node in the list.
  ListNode<int>* node = &list_head;
  for (int i = 1; i <= 10; i++) {
    // Add a node for each number from 1 to 10.
    node = &node->SetNext(i);
  }
  
  // Reset the "node" pointer to point to the head.
  node = &list_head;
  do {
    // Iterate over the entire list, outputting each node's value in turn.
    cout << "Node: " << *node << endl;
    node = &node->Next();
  } while (node != nullptr);

  system("pause");
  return 0;
}
