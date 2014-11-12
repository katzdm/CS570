#ifndef _EMPLOYEE_ROLE_H_
#define _EMPLOYEE_ROLE_H_

// Standard C/C++ Headers
#include <string>

// Application Headers
#include "Range.h"

// Using Directives
using std::string;

class EmployeeRole {
  string role_name_;
  Range salary_range_;

public:
  EmployeeRole(string name, double low_salary, double high_salary);

  bool ValidateSalary(double salary) const;
  double GetLowestSalary() const;
};

#endif
