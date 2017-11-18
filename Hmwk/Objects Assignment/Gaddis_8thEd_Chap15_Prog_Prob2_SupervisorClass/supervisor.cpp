/*
 * File:   supervisor.cpp
 * Author: Javier Ventura
 * Purpose: Implemenation of Supervisor class that is inherited from employee
 * Created on November 17, 2017, 3:41 PM
 */


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

#include "Employee.h"
#include "Supervisor.h"

using namespace std;

Supervisor::Supervisor():Employee(){
    shift=1;
    salary= 0.0;
    yearlybonus=0.0;
}

Supervisor::Supervisor(const Supervisor& cr):Employee(cr){
    this ->shift=cr.shift;
    this->salary=cr.salary;
    this->yearlybonus=cr.yearlybonus;
}

void Supervisor::getDatap(){
    cout<<"Please the shift (1 or 2): ";
    cin>>shift;
    while(shift<1 || shift>2){
        cout<<"Not valid--- Shift 1 or 2 only: "<<endl;
        cin>>shift;
    }
    cout<<"Enter yearly salary for Supervisor: ";
    cin>>salary;
    cout<<"Did you produce more than 10,000 units this year ENTER Y or N"<<endl;
    char res;
    cin>>res;
    if(res=='Y'){
        yearlybonus=500;
        salary+=yearlybonus;
        cout<<"CONGRATS YOU MADE BONUS"<<endl;
    }
    else {
        salary+=0;
    }
}

void Supervisor::printp(){
    cout<<"Shift Supervising: Shift "<<shift<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Salary: $"<<salary<<endl;
}

Supervisor::~Supervisor(){
    
}