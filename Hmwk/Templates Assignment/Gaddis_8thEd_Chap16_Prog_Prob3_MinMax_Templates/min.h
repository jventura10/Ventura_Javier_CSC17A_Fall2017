/*
 * File:   min.h
 * Author: Javier Ventura
 * Purpose: Minimum Template 
 * Created on November 30, 2017, 4:34 PM
 */

#ifndef MIN_H
#define MIN_H

template <class T>
T Min(T arg1,T arg2){
    if(arg1<arg2){
        return arg1;
    }
    else{
        return arg2;
    }
}

#endif /* MIN_H */

