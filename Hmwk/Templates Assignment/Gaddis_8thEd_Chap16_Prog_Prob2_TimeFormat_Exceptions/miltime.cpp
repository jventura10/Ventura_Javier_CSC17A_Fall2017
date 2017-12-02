/*
 * File:   miltime.cpp
 * Author: Javier Ventura
 * Purpose: Implementation of Military Time Class
 * Created on November 28, 2017, 7:36 PM
 */

#include <iostream>

#include "miltime.h"
#include "time.h"

using namespace std;

void Miltime::setTime(int mHrs, int mSecs){
    if(mHrs<0 || mHrs>2359){
        throw BadHour();
    }
    else{
        milHrs=mHrs;
    }
    if(mSecs<0 || mSecs>59){
        throw BadSeconds();
    }
    else{
        milScs=mSecs;
    }
    hour=(milHrs/100);
    min=milHrs%100;
    sec=milScs;
}

int Miltime::getHour(){
    return milHrs;
}

int Miltime::getStHr(){
    return hour%12;
}
