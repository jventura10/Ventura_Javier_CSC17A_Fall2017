/*
 * File:   main.cpp
 * Author: jvg95
 *
 * Created on November 17, 2017, 5:31 PM
 */


#include <cstdlib>
#include <iostream>
#include <fstream>

#include "FeetInches.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int  first, second; 
    
    // Get a distance for the first object.
    cout<<"Enter a distance in feet: ";
    cin>>first;

    // Get a distance for the second object.
    cout<<"Enter another distance in inches.\n";
    cin>>second;
    cout<<"The values you entered are: ";
    cout<<first<<" and "<<second<<endl;

    return 0;
}

