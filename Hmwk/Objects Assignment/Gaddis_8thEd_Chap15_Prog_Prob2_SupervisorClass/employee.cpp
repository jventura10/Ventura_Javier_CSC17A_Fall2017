/*
 * File:   employee.cpp
 * Author: Javier Ventura
 * Purpose: Implementation for employee class
 * Created on November 17, 2017, 3:41 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

Employee::Employee(){
    name=" ";
    num=0;
    hire=" ";
}
    
Employee::Employee(const Employee& is){
    this ->name=is.name;
    this->num=is.num;
    this->hire=is.hire;
}
    
void Employee::getName(){
    cout<<"Enter name"<<endl;
    cin>>name;
    
}

void Employee::getData(){
    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Enter employee number: ";
    cin>>num;
    cout<<"Enter hire date (MM/DD/YYYY): ";
    cin>>hire; 
}

void Employee::print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Employee Number: "<<num<<endl;
    cout<<"Date Hired: "<<hire<<endl;
}

Employee:: ~Employee(){
    
}