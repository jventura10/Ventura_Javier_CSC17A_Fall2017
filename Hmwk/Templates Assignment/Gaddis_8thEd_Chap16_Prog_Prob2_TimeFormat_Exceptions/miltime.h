/*
 * File:   miltime.h
 * Author: Javier Ventura
 * Purpose: Specification for Military Time Class
 * Created on November 28, 2017, 7:14 PM
 */

#ifndef MILTIME_H
#define MILTIME_H

#include "time.h"

class Miltime:public Time{
    private:
        int milHrs;
        int milScs;
    public:
        Miltime(int hours,int secs){
            milHrs=hours;
            milScs=secs;
        }
        class BadHour{
            
        };
        class BadSeconds{
            
        };
        void setTime(int mHrs, int mSecs);
        int getHour();
        int getStHr();
};


#endif /* MILTIME_H */

