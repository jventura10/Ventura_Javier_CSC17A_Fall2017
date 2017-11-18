/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: English Description of numbers,0-9999,using classes & static variables
 * Created on November 10, 2017, 6:46 PM
 */

#include <string>
#include <iostream>
#include <math.h>

#include "numbers.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Prompt for Data
    cout<<"Enter a number to see English translation (Range is 1-9999): ";
    cin>>n;
    while(n<1 || n>9999){
        cout<<"Range is 1-9999, Enter Again: ";
        cin>>n;
    }
    
    while(n>=1 && n<=9999){
        cout<<"The number "<<n<<" written in English is: ";
        
        //The class has a single integer member variable
        Numbers number(n);
        
        //Call Member Function
        number.print();
        cout<<endl;
        cout<<endl;
        cout<<"Enter another Number or enter a negative number to exit: ";
        cin>>n;
    }

    return 0;
}

