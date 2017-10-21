/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Date Class
 * Created on October 19, 2017, 12:00 PM
 */

#include <iostream>
#include <valarray>
#include "Date.h"

using namespace std;

Date::Date(){
    month=0;
    year=0;
    day=0;
}

void Date::prnt1(int x, int y, int z){
    cout<<endl;
    cout<<y<<"/"<<x<<"/"<<z<<endl;
}

void Date::prnt2(int x, int y, int z){
    if(y==1){
        cout<<"January "<<x<<", "<<z<<endl;
    }
    if(y==2){
        cout<<"February "<<x<<", "<<z<<endl;
    }
    if(y==3){
        cout<<"March "<<x<<", "<<z<<endl;
    }
    if(y==4){
        cout<<"April "<<x<<", "<<z<<endl;
    }
    if(y==5){
        cout<<"May "<<x<<", "<<z<<endl;
    }
    if(y==6){
        cout<<"June "<<x<<", "<<z<<endl;
    }
    if(y==7){
        cout<<"July "<<x<<", "<<z<<endl;
    }
    if(y==8){
        cout<<"August "<<x<<", "<<z<<endl;
    }
    if(y==9){
        cout<<"September "<<x<<", "<<z<<endl;
    }
    if(y==10){
        cout<<"October "<<x<<", "<<z<<endl;
    }
    if(y==11){
        cout<<"November "<<x<<", "<<z<<endl;
    }
    if(y==12){
        cout<<"December "<<x<<", "<<z<<endl;
    }
}

void Date::prnt3(int x, int y, int z){
    if(y==1){
        cout<<x<<" January "<<z<<endl;
    }
    if(y==2){
        cout<<x<<" February "<<z<<endl;
    }
    if(y==3){
        cout<<x<<" March "<<z<<endl;
    }
    if(y==4){
        cout<<x<<" April "<<z<<endl;
    }
    if(y==5){
        cout<<x<<" May "<<z<<endl;
    }
    if(y==6){
        cout<<x<<" June "<<z<<endl;
    }
    if(y==7){
        cout<<x<<" July "<<z<<endl;
    }
    if(y==8){
        cout<<x<<" August "<<z<<endl;
    }
    if(y==9){
        cout<<x<<" September "<<z<<endl;
    }
    if(y==10){
        cout<<x<<" October "<<z<<endl;
    }
    if(y==11){
        cout<<x<<" November "<<z<<endl;
    }
    if(y==12){
        cout<<x<<" December "<<z<<endl;
    }  
}