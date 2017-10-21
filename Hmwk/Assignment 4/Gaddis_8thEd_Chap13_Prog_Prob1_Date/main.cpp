/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Date Class
 * Created on October 19, 2017, 12:00 PM
 */

#include <iostream>
#include "Date.h"

using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    int mo;     //Month that user enters [1-12]
    int yr;     //Year user enters 
    int dy;     //Day user enters, ranges [1-31] or [1-30] or [1-28]
    Date obj;     //Creating object
    
    //Prompt for data
    cout<<"Enter month in format MM: ";
    cin>>mo;
    while(mo>12 || mo<1){               //Input Validation for months [1-12]
        cout<<"Enter month in format MM: ";
        cin>>mo;
    }
    cout<<"Enter day in format DD: ";
    cin>>dy;
    if(mo==2){                    //If month is February day range is [1-28]
        while(dy>28 || dy<1){       //Input Validation
            cout<<"Enter day in format DD: ";
            cin>>dy;
        }
    }
    else if(mo==4 || mo==6 || mo==9 || mo==11){  //Month range [1-30]
        while(dy>30 || dy<1){                   //Input Validation
            cout<<"Enter day in format DD: ";
            cin>>dy;
        }
    }
    else{                               //Other months range [1-31]
        while(dy>31 || dy<1){           //Input Validation
            cout<<"Enter day in format DD: ";
            cin>>dy;
        }
    }
    
    cout<<"Enter Year: ";
    cin>>yr;
    while(yr<1){
        cout<<"Enter Year: ";
        cin>>yr;
    }
    
    //Call Member Functions
    obj.prnt1(dy,mo,yr);
    obj.prnt2(dy,mo,yr);
    obj.prnt3(dy,mo,yr);
    

    return 0;
}

