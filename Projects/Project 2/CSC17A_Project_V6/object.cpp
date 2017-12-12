/*
 * File:   object.cpp
 * Author: Javier Ventura 
 *
 * Created on December 10, 2017, 12:03 PM
 */

#include <iostream>

#include "object.h"

using namespace std;

template <class T>
Object<T>::Object(){
    num=0;
   
}

template <class T>
void Object<T>::setX(){
    cout<<"Enter Number of Players: ";
    cin>>num;
    
    x=new int[num];
    
}

template <class T>
Object<T>::~Object(){
    delete x;
}