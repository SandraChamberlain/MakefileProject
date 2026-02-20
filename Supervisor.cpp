/*
* Author: Sandra E. Chamberlain
* File: Supervisor.cpp
* Purpose: Implementation file for the Supervisor class. Defines the member
*          functions declared in Supervisor.h for the drived Superviosr type.
*/



#include <iostream>
#include "Supervisor.h"
using namespace std;

Supervisor::Supervisor() : Employee() {
  numSupervised = 0;
}

Supervisor::Supervisor(string name, double salary, int numSupervised)
  : Employee(name, salary) {
  this->numSupervised = numSupervised;
}

void Supervisor::print() const {
  Employee::print();
  cout << "Number Supervised: " << numSupervised << endl;
}

int Supervisor::getNumSupervised() const {
  return numSupervised;
}
