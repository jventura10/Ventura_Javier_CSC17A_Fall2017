/*
 * File:   main.cpp
 * Author: Javier Ventura   
 * Purpose: Feet To Inches Modification Overloading Operators
 * Created on November 17, 2017, 5:10 PM
 */

#include <cstdlib>
#include <iostream>

#include "feetInches.h"

using namespace std;

int main(int argc, char** argv){
    // Define two objects.
    int first, second; 
    
    
    // Get a distance for the first object.
    cout<<"Enter a distance in feet: ";
    cin>>first;

    // Get a distance for the second object.
    cout<<"Enter another distance in inches: ";
    cin>>second;
    cout<<"The values you entered incremented: ";
    cout<<first+1<<" and "<<second+1<<endl;

    return 0;
}


