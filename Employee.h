/*
 * Author: Sandra E. Chamberlain
 * File: Employee.h
 * Purpose: Header file defining the Employee base class. Declares attributes
 *          and member functions common to all employee types.
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

# include <string>
using namespace std;

class Employee {
 private:
  string name;
  double salary;

 public:
  Employee();
  Employee(string name, double salary);

  void print() const;
  string getName() const;
  double getSalary() const;
};

#endif
