/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Exceptions for Military Time Class
 * Created on November 28, 2017, 5:23 PM
 */

#include <cstdlib>
#include <iostream>

#include "miltime.h"
#include "time.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int hr;
    int sec;
    Miltime time1(0,0);
    
    cout<<"Enter time in military hours: ";
    cin>>hr;
    cout<<"Enter the amount of seconds: ";
    cin>>sec;
    
    try{
        time1.setTime(hr,sec);
        cout<<"Military Format: "<<time1.getHour()<<" "<<time1.getSec()<<"Sec "<<endl;
        
        if(time1.getHour()/12==1){
            cout<<"Standard Format: "<<time1.getStHr()<<":";
            if(time1.getMin()==0){
                cout<<time1.getMin()<<"0"<<time1.getSec()<<"PM"<<endl;
            }
            else{
            cout<<time1.getMin()<<"PM"<<endl;
            }
        }
        else{
            cout<<"Standard Format: "<<time1.getStHr()<<":";
            if(time1.getMin()==0){
                cout<<time1.getMin()<<"0"<<"AM"<<endl;
            }
            else{
                cout<<time1.getMin()<<":"<<time1.getSec()<<"AM"<<endl;
            }
        }
    }
    catch(Miltime::BadHour){
        cout<<"Error Invalid Hours 0-2359"<<endl;
    }
    catch(Miltime::BadSeconds){
        cout<<"Error Invalid Seconds only 0-:59";
    }
    
    return 0;
}

