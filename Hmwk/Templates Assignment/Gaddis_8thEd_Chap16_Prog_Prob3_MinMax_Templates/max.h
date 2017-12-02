/*
 * File:   max.h
 * Author: Javier Ventura
 * Purpose: Maximum Template 
 * Created on November 30, 2017, 4:31 PM
 */

#ifndef MAX_H
#define MAX_H

template <class T>
T Max(T arg1, T arg2){
    if(arg1>arg2){         
        return arg1;
    }
    else{
        return arg2;
    }
}

#endif /* MAX_H */

