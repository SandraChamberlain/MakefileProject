/*
 * Author: Sandra E. Chamberlain
 * File: Officer.cpp
 * Purpose: Implementation file fro the Officer class. Defines the member
 *          functions declared in Officer.h for the derived Officer type.
 */


#include <iostream>
#include "Officer.h"
using namespace std;

Officer::Officer() : Employee() {
  evilness = 0.0;
}

Officer::Officer(string name, double salary, double evilness)
  : Employee(name, salary) {
  this->evilness = evilness;
}

void Officer::print() const {
  Employee::print();
  cout << "Evilness: " << evilness << endl;
}

double Officer::getEvilness() const {
  return evilness;
}

