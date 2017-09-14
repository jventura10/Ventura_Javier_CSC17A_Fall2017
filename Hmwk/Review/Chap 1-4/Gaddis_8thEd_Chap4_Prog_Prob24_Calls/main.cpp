/*
 * File:   main.cpp
 * Author: Javier Ventura 
 * Purpose: Call Rates for Long Distance Phone Calls
 * Created on September 3, 2017, 6:12 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    float time;
    float min;
    float rate1=0.05;
    float rate2=0.45;
    float rate3=0.20;
    float tot;
    
    cout<<"Carrier Charges: "<<endl;
    cout<<"Enter the time the call was started (HH.MM Format):"<<endl;
    cin>>time;
    cout<<"Enter how many minutes the call lasted:"<<endl;
    cin>>min;
    if(time>=0&&time<6.60){
        tot=min*rate1;
        cout<<"Total Charges: $"<<tot<<endl;
    }
    else if(time>=7.00&&time<19.01){
        tot=min*rate2;
        cout<<"Total Charges: $"<<tot<<endl;
    }
    else{
        tot=min*rate3;
        cout<<"Total Charges: $"<<tot<<endl;
    }

    return 0;
}

