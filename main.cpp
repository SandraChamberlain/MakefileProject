/* 
 * Author: Sandra E. Chamberlain
 * File: main.cpp
 * Purpose: Entry point for the Employee inheritance program. Creates objects
 *          and demostrates functionality of Employee, Officer, and Supervisor.
 */





# include <iostream>
# include "Employee.h"
# include "Officer.h"
# include "Supervisor.h"

using namespace std;

int main() {
  Employee e1("John Doe", 50000);
  Officer o1("Jane Smith", 60000, 5000);
  Supervisor s1("Bob Brown", 70000, 10);

  cout << "Employee Information: " << endl;
  e1.print();

  cout << "\nOfficer Information: " << endl;
  o1.print();

  cout << "\nSupervisor Information: " << endl;
  s1.print();

  return 0;

}
