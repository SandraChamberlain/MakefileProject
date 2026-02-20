/*
 * Author: Sandra E. Chamberlain
 * File: Supervisor.h
 * Purpose: Header fiel defining the Supervisor class, which inherits from Employee.
 *          Declares Supervisor-specific attributes and member functions.
 */



#ifndef SUPERVISOR_H
#define SUPERVISOR_H

# include "Employee.h"

class Supervisor : public Employee {

 private:
  int numSupervised;

 public:
  Supervisor();
  Supervisor(string name, double salary, int numSupervised);

  void print() const;
  int getNumSupervised() const;
};

#endif

