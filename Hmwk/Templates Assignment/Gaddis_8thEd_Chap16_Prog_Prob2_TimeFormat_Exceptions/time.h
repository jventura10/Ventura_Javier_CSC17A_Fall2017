/*
 * File:   time.h
 * Author: Javier Ventura
 * Purpose: Specification for Time Class
 * Created on November 28, 2017, 6:12 PM
 */

#ifndef TIME_H
#define TIME_H

class Time{
protected:
    int hour;
    int min;
    int sec;
public:
    Time(){
        hour=0;
        min=0;
        sec=0;
    }
    Time(int h,int m,int s){
        hour=h;
        min=m;
        sec=s;
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


#endif /* TIME_H */

