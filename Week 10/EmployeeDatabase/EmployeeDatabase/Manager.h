#ifndef _MANAGER_H_
#define _MANAGER_H_

// Standard C/C++ Headers
#include <string>
#include <vector>

// Application Headers
#include "Employee.h"
#include "EmployeeRole.h"

using std::vector;

class Manager : public Employee {
  vector<Employee> people_managed_;

public:
  Manager(string first_name, string last_name, EmployeeRole* role);

  void AddPersonManaged(Employee employee);
  size_t GetNumPeopleManaged();
};

#endif
