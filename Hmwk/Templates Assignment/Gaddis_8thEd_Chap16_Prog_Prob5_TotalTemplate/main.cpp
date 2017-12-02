/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Total Template, Continue inputting numbers
 * Created on November 30, 2017, 5:37 PM
 */

#include <iostream>
#include "total.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int numE;   //Number of Elements

    //Prompt for Data 
    cout<<"How many integers,do you want to enter?: ";
    cin>>numE;
    
    //Call Function and Ouput Data
    cout<<endl;
    cout<<"Total: "<<Total(numE)<<endl;
    
    return 0;
}

