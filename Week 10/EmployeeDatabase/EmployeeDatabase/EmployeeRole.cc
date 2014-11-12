// Declaration Header
#include "EmployeeRole.h"

EmployeeRole::EmployeeRole(string name, double low_salary, double high_salary)
  : salary_range_(low_salary, high_salary)
{
  this->role_name_ = name;
}

bool EmployeeRole::ValidateSalary(double salary) const {
  return this->salary_range_.IsInRange(salary);
}

double EmployeeRole::GetLowestSalary() const {
  return this->salary_range_.GetLowerBound();
}
