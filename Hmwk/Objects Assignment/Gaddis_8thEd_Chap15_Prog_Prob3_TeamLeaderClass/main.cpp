/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Creating Team Leader Class from Employee Class
 * Created on November 17, 2017, 4:35 PM
 */


#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

#include "employee.h"
#include "teamleader.h"

using namespace std;

int main(int argc, char** argv) {
    Employee n;
    TeamLeader cr;
    
    //Call Functions
    n.getData();
    cr.getDatap();
    
    //Output Data
    cout<<endl;
    cout<<"Employee Record"<<endl;
    cout<<"---------------"<<endl;
    n.print();
    cr.printp();
    
    return 0;
}