/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Rainfall Vector
 * Created on December 1, 2017, 6:35 PM
 */

#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const int NUM_MONTHS=12;

//Function Prototypes
float getTot(vector<float>);
float getAvg(vector<float>);
float getLarg(vector<float>,int &);
float getSmll(vector<float>,int &);

int main(int argc, char** argv) {
    //Declare Variables
    vector<float> rnfll;    //Vector to hold rainfall
    int sub=0;              //Subscript starting at 0
    float num;              //Number = rainfall for given month,user enters
    
    //Prompt for Data
    for(int month=0;month<NUM_MONTHS;month++){
        cout<<"Enter the rainfall (inches) for month "<<month+1<<": ";
        cin>>num;
        rnfll.push_back(num);
        while(rnfll.at(month)<0){
            cout<<"Rainfall cannot be negative, enter again: ";
            cin>>rnfll[month];
        }
    }
    
    //Output Data
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Total Rainfall for the year is: ";
    cout<<getTot(rnfll)<<" inches."<<endl;
    cout<<"Average Rainfall for the year is: ";
    cout<<getAvg(rnfll)<<" inches."<<endl;
    cout<<"The largest amount of Rainfall was: "<<getLarg(rnfll,sub);
    cout<<" inches, in month "<<(sub+1)<<"."<<endl;
    cout<<"The smallest amount of Rainfall was: "<<getSmll(rnfll,sub);
    cout<<" inches, in month "<<(sub+1)<<"."<<endl;
            
    return 0;
}

float getTot(vector<float> rnfll){
    float total=0;
    for(int i=0;i<NUM_MONTHS;i++){
        total+=rnfll.at(i);
    }
    return total;
}

float getAvg(vector<float> rnfll){
    float avg=0.0;
    avg=getTot(rnfll)/NUM_MONTHS;
    return avg;
}

float getLarg(vector<float> rnfll,int &sub){
    float larg=0.0;
    larg=rnfll[0];
    for(int month=0;month<NUM_MONTHS;month++){
        if(rnfll.at(month)>larg){
            larg=rnfll.at(month);
            sub=month;
        }
    }
    return larg;
}

float getSmll(vector<float> rnfll,int &sub){
    float small;
    small=rnfll[0];
    for(int month=0;month<NUM_MONTHS;month++){
        if(rnfll.at(month)<small){
            small=rnfll.at(month);
            sub=month;
        }
    }
    return small;
}