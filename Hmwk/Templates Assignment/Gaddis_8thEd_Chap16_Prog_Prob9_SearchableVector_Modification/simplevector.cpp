/*
 * File:   simplevector.cpp
 * Author: Javier Ventura
 * Purpose: Simple Vector Template Class Implementation
 * Created on December 1, 2017, 1:20 PM
 */

#include <cstdlib>
#include <new>
#include <iostream>

#include "simplevector.h"

using namespace std;

template <class T>
SimpleV<T>::SimpleV(int s){
    arrSz=5;
    try{
        aptr=new T[s];
    }
    catch(bad_alloc){
        memErr();
    }
    for(int i=0;i<arrSz;i++){
        *(aptr+i)=0;
    }
}

template <class T>
SimpleV<T>::SimpleV(const SimpleV &obj){
    //Copy Array Size
    arrSz=obj.arrSz;
    //Allocate memory for array
    aptr=new T[arrSz];
    if(aptr==0){
        memErr();
    }
    for(int i=0;i<arrSz;i++){
        *(aptr+i)=*(obj.aptr+i);
    }
}

template <class T>
SimpleV<T>::~SimpleV(){
    if(arrSz>0){
        delete []aptr;
    }
}

template <class T>
void SimpleV<T>::memErr(){
    cout<<"Error: Cannot Allocate memory."<<endl;
    exit(EXIT_FAILURE);
}

template <class T>
void SimpleV<T>::subErr(){
    cout<<"Error: Subscript out of range."<<endl;
    exit(EXIT_FAILURE);
}

//Get Element Function
template <class T>
T SimpleV<T>::getEle(int sub){
    if(sub<0 || sub>=arrSz){
        subErr();
    }
    return aptr[sub];
}

template <class T>
T &SimpleV<T>::operator [](const int &sub){
    if(sub<0 || sub>=arrSz){
        subErr();
    }
    return aptr[sub];
}