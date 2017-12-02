/*
 * File:   total.h
 * Author: Javier Ventura
 * Purpose: Total Template
 * Created on November 30, 2017, 5:39 PM
 */


#ifndef TOTAL_H
#define TOTAL_H

#include <iostream>

using namespace std;

template <class T>
T Total(T arg1){
    //Declare Variables
    T arg2=0;       //Argument 2 will be total
    T num;          //Number entered at a given
    for(int i=0;i<arg1;i++){
        cout<<"Enter Value: ";
        cin>>num;
        arg2=arg2+num;
    }
    return arg2;
}


#endif /* TOTAL_H */

