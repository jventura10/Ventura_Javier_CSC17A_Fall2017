/*
 * File:   main.cpp
 * Author: 
 * Purpose: Number Array Class
 * Created on October 18, 2017, 6:37 PM
 */

#include <cstdlib>
#include <iostream>


#include "Array.h"

using namespace std;

NumArr::NumArr(int n){
    numE==n;
    numA=0;
    numA=new float(numE);
    for(int i=0;i<numE;i++){
        numA[i]=0;
    }
}

void NumArr::storeN(){
    float val;
    int ele;
    cout<<"Which space in the Array, do you want to fill?: ";
    cin>>ele;
    cout<<"Enter Value: ";
    cin>>val;
    numA[ele]=val;
}

float NumArr::getNum(int ele)const{
    return numA[ele];
}

float NumArr::highV(int n)const{
    float hVal;
    hVal=numA[0];
    for(int i=0;i<n;i++){
        if(hVal<numA[i]){
            hVal=numA[i];
        }
    }
    return hVal;
}

float NumArr::lowV(int x)const{
    float lVal;
    lVal=numA[0];      //Initialize to higher number so at least 1 element is lower
    for(int i=0;i<x;i++){
        if(lVal>numA[i]){
            lVal=numA[i];
        }
    }
    return lVal;
}

float NumArr::avgV(int y)const{
    float tot=0;
    for(int i=0;i<y;i++){
        tot=tot+numA[i];
    }
    return tot/y;
}

NumArr::~NumArr(){
    delete numA;
}