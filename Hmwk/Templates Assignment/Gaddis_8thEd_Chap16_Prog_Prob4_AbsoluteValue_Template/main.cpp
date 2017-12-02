/*
 * File:   main.cpp
 * Author: Javier Ventura 
 * Purpose: Absolute Value Template
 * Created on November 30, 2017, 4:46 PM
 */

#include <iostream>
#include <cmath>
#include "absvalue.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int num;        //Number entered passed into template 
    int abt;        //Absolute Value of Num
    
    //Prompt For Data
    cout<<"Enter an Integer for absolute value (- or +): ";
    cin>>num;
    
    //Call Function
    abt=AbsValue(num);
    
    //Output Data
    cout<<"Absolute Value of "<<num<<" is "<<abt<<endl;
    
    return 0;
}

