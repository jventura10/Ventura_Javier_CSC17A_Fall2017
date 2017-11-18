/*
 * File:   employee.h
 * Author: Javier Ventura
 * Purpose: Specification for Employee Class
 * Created on November 17, 2017, 2:45 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using std::string;

class Employee{
private:
    string name;
    int num;
    string hire;
public:
    Employee();
    Employee(const Employee&);
    ~Employee();
    void getName();
    void getData();
    void print();
    
};


#endif /* EMPLOYEE_H */