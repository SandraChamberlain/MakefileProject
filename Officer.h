/*
 * Author: Sandra E. Chamberlain
 * File: Officer.h
 * Purpose: Header file defining the Officer class, which inherits from Employee.
 *          Declares Officer-specific attributes and member functions.
 */



#ifndef OFFICER_H
#define OFFICER_H

# include "Employee.h"

class Officer : public Employee {

 private:
  double evilness;

 public:
  Officer();
  Officer(string name, double salary, double evilness);

  void print() const;
  double getEvilness() const;
};

#endif

