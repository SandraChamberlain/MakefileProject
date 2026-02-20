/*
 * Author: Sandra E. Chamberlain
 * File: Employee.cpp
 * Purpose: Implementation file for the Employee base class. Defines
 *          the member functions devlared in Employee.h.
 */



# include <iostream>
# include "Employee.h"
using namespace std;

Employee::Employee() {
  name = "";
  salary = 0.0;
}

Employee::Employee(string name, double salary) {
  this->name = name;
  this->salary = salary;
}

void Employee::print() const {
  cout << "Name: " << name << endl;
  cout << "Salary: $" << salary << endl;
}

string Employee::getName() const {
  return name;
}

double Employee::getSalary() const {
  return salary;
}


