/*
 * File:   main.cpp
 * Author: Javier Ventura   
 * Purpose: Population Estimate
 * Created on September 7, 2017, 10:09 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float stNum;    //Starting Number of Organisms
    float inc;      //Daily Percentage Increase of Population   
    float days;     //Days the Population Increases
    float pop;
    
    //Prompt for Data
    cout<<"Enter the number of starting population.(No Commas)"<<endl;
    cin>>stNum;
    while(stNum<2){
        cout<<"Enter the number of starting population.(No Commas)"<<endl;
        cin>>stNum;
    }
    cout<<"Now enter the daily percentage increase of population.(No % Sign)"<<endl;
    cin>>inc;
    while(inc<=0){
        cout<<"Enter the daily percentage increase of population.(No % Sign)"<<endl;
        cin>>inc;
    }
    cout<<"Finally, Enter the days the population increases"<<endl;
    cin>>days;
    while(days<1){
        cout<<"Finally, Enter the days the population increases"<<endl;
        cin>>days;
    }
    
    //Output Data
    cout<<"Day 0 Population: "<<stNum<<endl; //Starting Population Before Inc
    for(int i=1;i<=days;i++){
        pop=stNum+(stNum*(inc/100.0f));
        cout<<"Day "<<i<<" Population: "<<pop<<endl;
        stNum=pop;
    }
    
    
    
    return 0;
}

