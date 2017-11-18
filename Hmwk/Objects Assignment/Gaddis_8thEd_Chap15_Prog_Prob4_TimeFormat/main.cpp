/*
 * File: main.cpp
 * Author: Javier Ventura
 * Purpose: Time Format Class 
 * Created on November 16, 2017 2:31 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

class Time{
protected: 
    int hour;
    int min;
    int sec;
public:
    Time(){
        
    }
    int gethour()const{
        return hour;
    }
    int getMin()const{
        return min;
    }
    int getSec()const{
        return sec;
    }
};

class MilTime: public Time{
    private:
        int milHrs;
        int milScs;
    public:
        MilTime(int hours,int seconds){
            milHrs=hours;
            milScs=seconds;
        }
        
        void setTime(int mhours,int mseconds){
            if(mhours<2359 && mhours>0 && sec<=59 && sec>=0){
                milHrs=mhours;
                mseconds=mseconds;
                hour=(milHrs/100);
                min=milHrs%100;
                sec=milScs;
            }
            else{
                cout<<"Incorrect input of military format!"<<endl;
            }
        }
        int getHour(){
            return milHrs;
        }
        int getStandHr(){
            return hour%12;
        }
        
};

int main(int argc, char** argv) {
    //Declare Variables
    int hr,sec;
    MilTime time1(0,0);
    
    //Prompt for data
    cout<<"Enter Time in Military Format: ";
    cin>>hr;
    
    //Map Data
    sec=hr%10;
    
    //Call Function
    time1.setTime(hr,sec);
    
    //Outputting Data
    cout<<"Military Format: "<<time1.getHour()<<" hours"<<endl;
    if(time1.gethour()/12==1){
        cout<<"Standard Format: "<<time1.getStandHr()<<":";
        if(time1.getMin()==0){
            cout<<time1.getMin()<<"0 PM"<<endl;
        }
        else{
            cout<<time1.getMin()<<" PM"<<endl;
        }
    }
    else{
        cout<<"Standard Format: "<<time1.getStandHr()<<":";
        if(time1.getMin()==0){
            cout<<time1.getMin()<<"0 AM"<<endl;
        }
        else{
            cout<<time1.getMin()<<" AM"<<endl;
        }
    }
    
    return 0;
}
