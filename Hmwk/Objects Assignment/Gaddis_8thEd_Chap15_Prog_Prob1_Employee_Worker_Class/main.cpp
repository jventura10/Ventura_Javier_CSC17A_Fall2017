/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Inherit Production Worker class from employee class
 * Created on November 17, 2017, 2:37 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

#include "employee.h"
#include "productionworker.h"

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    Employee n;
    ProductionWorker cr;
    
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