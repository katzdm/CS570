// Declaration Header
#include "Manager.h"

Manager::Manager(string first_name, string last_name, EmployeeRole* role) 
  : Employee(first_name, last_name, role) {
}

void Manager::AddPersonManaged(Employee employee) {
  this->people_managed_.push_back(employee);
}

size_t Manager::GetNumPeopleManaged() {
  return this->people_managed_.size();
}
