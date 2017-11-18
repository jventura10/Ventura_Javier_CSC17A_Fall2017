/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Entering Number out 0f 365 returned month date translation
 * Created on November 12, 2017, 10:06 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "dayofyear.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int n;
    Dayofyear x(n);
    
    //Prompt For Day
    cout<<"Enter number out of 365 to see the month and date: ";
    cin>>n;
    while(n<1 || n>365){        //Input Validation
        cout<<"Enter Again: ";
        cin>>n;
    }
    
    //Call Function
    x.print(n);

    return 0;
}

