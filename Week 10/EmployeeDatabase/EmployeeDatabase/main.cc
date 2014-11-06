// Standard C/C++ Headers
#include <iostream>

// Application Headers
#include "Employee.h"
#include "Manager.h"

// Using Directives
using namespace std;

int main() {
  EmployeeRole programmer_role("Programmer", 75000, 150000);
  EmployeeRole manager_role("Manager", 90000, 130000);
  
  Employee dan("Dan", "Katz", &programmer_role);
  Employee bogdan("Bogdan", "D", &programmer_role);
  Manager ben("Ben", "C", &manager_role);

  ben.AddPersonManaged(dan);
  ben.AddPersonManaged(bogdan);

  double number_from_user;
  cout << "Please enter a salary to be validated: ";
  cin >> number_from_user;

  bool valid_for_programmer = dan.SetSalary(number_from_user);
  bool valid_for_manager = ben.SetSalary(number_from_user);

  if (valid_for_manager && valid_for_programmer) {
    cout << "This is an adequate salary for either position." << endl;
  } else if (valid_for_manager) {
    cout << "This isn't valid for a programmer..." << endl;
  } else if (valid_for_programmer) {
    cout << "You isn't valid for a manager..." << endl;
  } else {
    cout << "This is not valid for either position." << endl;
  }
  cout << "Dan's salary: " << dan.GetSalary() << endl;
  cout << "Ben's salary: " << ben.GetSalary() << endl;

  cout << endl << endl << "People under Ben: " << ben.GetNumPeopleManaged() << endl;

  system("pause");
  return 0;
}
