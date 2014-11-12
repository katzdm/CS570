// Declaration Header
#include "Employee.h"

Employee::Employee(string first_name, string last_name, EmployeeRole* role)
  : first_name_(first_name)
  , last_name_(last_name)
  , role_(role)
  , salary_(role->GetLowestSalary()) {
}

double Employee::GetSalary() {
  return this->salary_;
}

bool Employee::SetSalary(double new_salary) {
  if (this->role_->ValidateSalary(new_salary)) {
    this->salary_ = new_salary;
    return true;
  }
  return false;
}
