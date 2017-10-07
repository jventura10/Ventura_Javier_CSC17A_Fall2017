/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Weather Data Using Structures Modification 
 * Created on October 3, 2017, 12:03 PM
 */

#include <iostream>
#include <string>

#include "Data.h"

using namespace std;

enum Months{JANUARY,FEBRUARY,MARCH,
            APRIL,MAY,JUNE,JULY,
            AUGUST,SEPTEMBER,OCTOBER,
            NOVEMBER,DECEMBER};

//Function Prototypes
void dsply(Months);

//Constant 
const int NUM_MONTHS=12;

int main(int argc, char** argv) {
    
    //Declare Variables
    Weather weather[NUM_MONTHS];
    Months month;
    float tot=0,high=0,low=50;
    float avg=0;
    float avgRfll;
    float avgAvg;
    
    //Prompt For Data
    for(month=JANUARY;month<=DECEMBER;month=static_cast<Months>(month+1)){
        cout<<"Enter Total rainfall for ";
        dsply(month);
        cout<<": ";
        cin>>weather[month].ttlRain;
        
        cout<<"Enter High Temperature this month: ";
        cin>>weather[month].hTemp;
        while(weather[month].hTemp<-100 || weather[month].hTemp>140){
            cout<<"Please enter within range [-100,140]: ";
            cin>>weather[month].hTemp;
        }
        if(high<weather[month].hTemp){
            high=weather[month].hTemp;
        }
        cout<<"Enter Low Temperature this month: ";
        cin>>weather[month].lTemp;
        while(weather[month].lTemp<-100 || weather[month].lTemp>140){
            cout<<"Please enter within range [-100,140]: ";
            cin>>weather[month].lTemp;
            cout<<endl;
        }
        if(low>weather[month].lTemp){
            low=weather[month].lTemp;
        }
        
        //Calculating Total Rainfall
        tot=tot+weather[month].ttlRain;   
        
        //Calculate Monthly Average Temperatures
        avg=avg+(weather[month].hTemp + weather[month].lTemp)/2;
    }
    
    //Calculations
    avgRfll=tot/NUM_MONTHS;     //Average Rainfall in the year
    avgAvg=avg/NUM_MONTHS;      //Average of MOnthly Average Temperatures
    
    //Output Data
    cout<<endl;
    cout<<"The Average monthly rainfall: "<<avgRfll<<endl;
    cout<<"Total Rainfall for the year: "<<tot<<endl;
    cout<<"Highest Temperature of the year: "<<high<<endl;
    cout<<"Lowest Temperature of the year: "<<low<<endl;
    cout<<"Average of Monthly Average Temperatures: "<<avgAvg<<endl;
            
    return 0;
}

void dsply(Months m){
    switch(m){
        case JANUARY:{
            cout<<"January";
            break;
        }
        case FEBRUARY:{
            cout<<"February";
            break;
        }
        case MARCH:{
            cout<<"March";
            break;
        }
        case APRIL:{
            cout<<"April";
            break;
        }
        case MAY:{
            cout<<"May";
            break;
        }
        case JUNE:{
            cout<<"June";
            break;
        }
        case JULY:{
            cout<<"July";
            break;
        }
        case AUGUST:{
            cout<<"August";
            break;
        }
        case SEPTEMBER:{
            cout<<"September";
            break;
        }
        case OCTOBER:{
            cout<<"October";
            break;
        }
        case NOVEMBER:{
            cout<<"November";
            break;
        }
        case DECEMBER:{
            cout<<"December";
            break;
        }
        
    }
}