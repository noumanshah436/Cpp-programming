// Fig. 10.10: Employee.h
// Employee class definition showing composition. // Member functions     defined in Employee.cpp.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
//#include "Date.h" // include Date class definition using namespace std;
class Employee
{
public:
    Employee(const string &, const string&, const Date&, const Date&);
    void print() const;
    ~Employee(); // provided to confirm destruction order
private:
    string firstName; // composition: member object
    string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date hireDate; // composition: member object 23

}; // end class Employee

#endif