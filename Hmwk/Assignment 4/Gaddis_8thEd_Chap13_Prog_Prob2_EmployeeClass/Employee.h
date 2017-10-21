/*
 * File:   Employee.h
 * Author: Javier Ventura
 * Purpose: Employee Class
 * Created on October 18, 2017, 6:33 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using std::string;

class Employee
{
    private:
        string name;
        int idNumber;
        string department;
        string position;
    public: 
        Employee(string,int, string, string);
        Employee(string,int);
        Employee();     
        void output(); 
};


#endif /* EMPLOYEE_H */

