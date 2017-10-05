/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Weather Data Using Structures
 * Created on October 3, 2017, 12:03 PM
 */

#include <iostream>
#include <string>

#include "Data.h"
using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    Weather months[12];
    float tot,high,low,avg;
    int highM,lowM;
    string month[12]={"January","February","March",
                      "April","May","June","July",
                      "August","September","October",
                      "November","December"};
    
    //Prompt For Data
    for(int i=0;i<12;i++){
        cout<<"Enter total rainfall for month "<<month[i]<<": ";
        cin>>months[i].ttlRain;
        cout<<"Enter highest temperature: ";
        cin>>months[i].hTemp;
        while(months[i].hTemp<-100 || months[i].hTemp>140){
            cout<<"Error: Range for Highest Temperature is [-100,140]"<<endl;
            cin>>months[i].hTemp;
        }
        cout<<"Enter lowest temperature: ";
        cin>>months[i].lTemp;
        while(months[i].lTemp<-100 || months[i].lTemp>140){
            cout<<"Error: Range for Highest Temperature is [-100,140]"<<endl;
            cin>>months[i].lTemp;
        }
    }
    
    for(int i=0;i<12;i++){
        tot=tot+months[i].ttlRain;
        months[i].avgT=(months[i].hTemp+months[i].lTemp)/2.0f;
    }
    
    //Initialize Variables
    high=months[0].hTemp;
    low=months[0].lTemp;
    
    for(int i=1;i<12;i++){
        if(months[i].hTemp>high){
            high=months[i].hTemp;
            highM=i;
        }
        if(months[i].lTemp<low){
            low=months[i].lTemp;
            lowM=i;
        }
    }
    avg=0;
    
    //Calculations For Average
    for(int i=0;i<12;i++){
        avg=avg+months[i].avgT;
    }
    
    //Output Data
    cout<<endl;
    cout<<"Average Monthly Rainfall: "<<tot/12<<endl;
    cout<<"Total Monthly Rainfall: "<<tot<<endl;
    cout<<"Highest Rainfall in "<<month[highM]<<" is: "<<high<<endl;
    cout<<"Lowest Rainfall in "<<month[lowM]<<" is: "<<low<<endl;
    cout<<"Average of Average Temperatures is: "<<avg/12<<endl;
    
    return 0;
}

