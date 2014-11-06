#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

// Standard C/C++ Headers
#include <string>

// Application Headers
#include "EmployeeRole.h"

class Employee {
  string first_name_;
  string last_name_;
  double salary_;
  EmployeeRole* role_;

public:
  // Does not take ownership of role.
  Employee(string first_name, string last_name, EmployeeRole* role);

  double GetSalary();

  // Set method may fail, if salary fails to meet the requirements as specified
  // by the role_ object.
  bool SetSalary(double new_salary);
};

#endif
