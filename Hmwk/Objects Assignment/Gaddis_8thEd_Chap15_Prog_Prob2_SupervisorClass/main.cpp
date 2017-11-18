/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Inheriting Supervisor Class from Employee Class
 * Created on November 17, 2017, 3:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

#include "employee.h"
#include "supervisor.h"

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    Employee n;
    Supervisor cr;
    
    //Call Functions
    n.getData();
    cr.getDatap();
    
    //Output Data
    cout<<endl;
    cout<<"Supervisor Pay Stub "<<endl;
    cout<<"------------------- "<<endl;
    n.print();
    cr.printp();
    
    return 0;
}