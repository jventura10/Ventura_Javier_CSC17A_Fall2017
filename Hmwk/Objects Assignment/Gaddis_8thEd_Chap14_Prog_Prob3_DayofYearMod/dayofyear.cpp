/*
 * File:   dayofyear.cpp
 * Author: Javier Ventura
 * Purpose: Implementation of Day of Year Class
 * Created on November 12, 2017, 10:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "dayofyear.h"

using namespace std;

Dayofyear::Dayofyear(int day){
    day=0;
}

void Dayofyear::print(int day){
    if(day>=1 && day<=31){
        cout<<endl;
        cout<<"January "<<day<<endl;
    }
    else if(day>=32 && day<=59){
        cout<<endl;
        cout<<"February "<<day-31<<endl;
    }
    else if(day>=60 && day<=90){
        cout<<endl;
        cout<<"March "<<day-59<<endl;
    }
    else if(day>=91 && day<=120){
        cout<<endl;
        cout<<"April "<<day-90<<endl;
    }
    else if(day>=121 && day<=151){
        cout<<endl;
        cout<<"May "<<day-120<<endl;
    }
    else if(day>=152 && day<=181){
        cout<<endl;
        cout<<"June "<<day-151<<endl;
    }
    else if(day>=182 && day<=212){
        cout<<endl;
        cout<<"July "<<day-181<<endl;
    }
    else if(day>=213 && day<=243){
        cout<<endl;
        cout<<"August "<<day-212<<endl;
    }
    else if(day>=244 && day<=273){
        cout<<endl;
        cout<<"September "<<day-243<<endl;
    }
    else if(day>=274 && day<=304){
        cout<<endl;
        cout<<"October "<<day-273<<endl;
    }
    else if(day>=305 && day<=334){
        cout<<endl;
        cout<<"November "<<day-304<<endl;
    }
    else if(day>=335 && day<=365){
        cout<<endl;
        cout<<"December "<<day-334<<endl;
    }
}

Dayofyear::~Dayofyear(){
    
}