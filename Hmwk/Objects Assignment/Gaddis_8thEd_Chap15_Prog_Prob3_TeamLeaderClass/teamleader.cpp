/*
 * File:   teamleader.cpp
 * Author: Javier Ventura
 * Purpose: Implementation of Team Leader Class
 * Created on November 17, 2017, 4:41 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

#include "Employee.h"
#include "TeamLeader.h"

using namespace std;

TeamLeader::TeamLeader():Employee(){
    required=1;
    salary= 0.0;
    Training=0.0;
    bonus=0.0;
}

TeamLeader::TeamLeader(const TeamLeader& cr):Employee(cr){
    this ->required=cr.required;
    this->salary=cr.salary;
    this->Training=cr.Training;
    this->bonus=cr.bonus;
}

void TeamLeader::getDatap(){
    cout<<"Please the required training hours"<<endl;
    cin>>required;
    while(required<1 || required>100){
        cout<<"Not valid "<<endl;
        cin>>required;
    }
    cout<<"How many training hours completed"<<endl;
    cin>>Training;
  
    if (Training>=required){
        bonus=500;
       
         cout<<"CONGRATS YOU MADE BOUNUS"<<endl;
    }
    else {
        bonus=0;
    } 
    
    cout<<"Enter rate for Team Leader : ";
    cin>>salary;
 
    
}

void TeamLeader::printp(){
    cout<<"Required training hours: "<<required<<endl;
    cout<<"Completed training hours: "<<Training<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Pay Rate: $"<<salary<<endl;
    cout<<"Bonus $"<<bonus<<endl;
}

TeamLeader::~TeamLeader(){
    
}