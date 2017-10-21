/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Employee Class
 * Created on October 20, 2017, 6:32 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

int main(int argc, char** argv) {

    //Pass by example info
    Employee n1(" Susan Meyers",47899, "Accounting   ",  "Vice President");
    Employee n2(" Mark Jones  ",39119, "IT           ",  "Programmer");
    Employee n3(" Joy Rogers  ",81774, "Manufacturing",  "Engineer");
    
    //Output Data
    cout<<"_______________________________________________________________"<<endl;
    cout<<"  NAME        ID NUMBER     DEPARMENT         POISITION   "<<endl;
    cout<<"_______________________________________________________________"<<endl;
    n1.output();
    n2.output();
    n3.output();
    cout<<"_______________________________________________________________"<<endl;
    
    
    return 0;
}