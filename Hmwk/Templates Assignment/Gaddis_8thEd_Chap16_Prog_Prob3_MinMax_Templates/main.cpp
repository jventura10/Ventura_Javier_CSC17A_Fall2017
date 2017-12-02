/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Minimum and Maximum with Templates 
 * Created on November 30, 2017, 2:13 PM
 */

#include <iostream>
#include "min.h"
#include "max.h"

using namespace std;

int main(int argc, char** argv){
    //Declare Variables
    int num1;       //Number 1 of integer type
    int num2;       //Number 2 of integer type
    int large;      //Larger Number of the 2
    int small;      //Smallest Number of the 2
    
    //Prompt for Data
    cout<<"Finding Maximum and Minimum"<<endl;
    cout<<"Enter First Value: ";
    cin>>num1;
    cout<<"Enter Second Value: ";
    cin>>num2;
    
    //Using Function Calls 
    large=Max(num1,num2);
    small=Min(num1,num2);
    
    //Outputting Maximum and Minimum 
    cout<<"Largest Value: "<<large<<endl;
    cout<<"Smallest Value: "<<small<<endl;
    
    return 0;
}

