/*
 * File: Employee.cpp
 * Author: Javier Ventura
 * Purpose: Employee Class
 * Created on October 20, 2017, 6:32 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

Employee::Employee( string name,int idNumber, string department, string position)
{
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
}
Employee::Employee( string name,int idNumber)
{
    this->name = name;
    this->idNumber = idNumber;
    department="";
    position="";
    
   
}

Employee::Employee()
{
    name="";
    idNumber=0;
    department="";
    position="";
    
  
}


void Employee::output()
{
    cout << name
           
            << "     " << idNumber 
            << "     " << department 
            << "     " << position<< endl;
}


