/*
 * File:   productionworker.cpp
 * Author: Javier Ventura
 * Purpose: Implementation for Production Worker Class inherited from employee
 * Created on November 17, 2017, 2:47 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

#include "employee.h"
#include "productionWorker.h"

using namespace std;

ProductionWorker::ProductionWorker():Employee(){
    shift=1;
    rate= 10.50;
    
}

ProductionWorker::ProductionWorker(const ProductionWorker& cr):Employee(cr){
    this ->shift=cr.shift;
    this->rate=cr.rate;
    
}

void ProductionWorker::getDatap(){
    cout<<"Please the shift (1 or 2)"<<endl;
    cin>>shift;
    while(shift<1 || shift>2){
        cout<<"Not valid--- Shift 1 or 2 only";
        cin>>shift;
    }
    cout<<"Enter Pay rate for Employee: ";
    cin>>rate;
}

void ProductionWorker::printp(){
    cout<<"Shift: Shift "<<shift<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Pay Rate: $"<<rate<<endl;
}

ProductionWorker::~ProductionWorker(){
    
}