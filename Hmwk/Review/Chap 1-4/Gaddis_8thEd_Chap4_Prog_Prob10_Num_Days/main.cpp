/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Enter Month and Year, to see how many days were in that month
 * Created on August 30, 2017, 8:55 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int month; 
    unsigned int year;
    int days;
    
    //Prompt for Data 
    cout<<"Program displays number of days in a month from any year"<<endl;
    cout<<"Enter a month (1-12): ";
    cin>>month;
    while(month<1 || month>12){
        cin>>month;
    }
    cout<<"Enter a year: ";
    cin>>year;
    
    //Map Data
    if(month==4||month==6||month==9||month==11){
        days=30;
    }
    else if(month==2){
        if((year%4==0 && year%100!=0)||(year%400==0)){
            days=29;
        }
        else{
            days=28;
        }
        
    }
    else{
        days=31;
    }
    
    //Output Data
    cout<<days<<" Days"<<endl;
    
    return 0;
}

