/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Date Class with Exception Classes
 * Created on November 26, 2017, 7:36 PM
 */

#include <cstdlib>
#include <iostream>
#include "date.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables---Create Object
    Date obj;
    int day;
    int month;
    int year;
    
    cout<<"Enter Day: ";
    cin>>day;
    cout<<"Enter Month(1-12): ";
    cin>>month;
    cout<<"Enter Year: ";
    cin>>year;
    
    cout<<endl;
    
    try{
        obj.setDay(day);
        obj.setMonth(month);
        obj.setYear(year);
        obj.printFormat1();
        obj.printFormat2();
        obj.printFormat3();
        
    }
    catch(Date::InvalidDay){
        cout<<"Error: A month has 1-31 days"<<endl;
    }
    catch(Date::InvalidMonth){
        cout<<"Error: There are only 12 months in a year"<<endl;
    }
    
    return 0;
}

