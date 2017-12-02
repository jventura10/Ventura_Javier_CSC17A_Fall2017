/*
 * File:   searchvector.cpp
 * Author: Javier Ventura
 * Purpose: Search Vector Class Implementation Inherited from Simple Vector Class
 * Created on December 1, 2017, 1:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <new>
#include "searchvector.h"
#include "simplevector.h"

using namespace std;

template <class T>
SearchV<T>::SearchV(const SearchV &obj):SimpleV<T>(obj.size()){
    for(int i=0;i<this->size();i++){
        this->operator [](i)=obj[i];
    }
}

template <class T>
int SearchV<T>::FindIt(const T item){
    int first=0,last=this->size()-1,middle,position=-1;
    bool found=false;
    while(!found && first<=last){
        middle=(first+last)/2;
        if(getEle(middle)==item){
            found=true;
            position=middle;
        }
        else if(getEle(middle>item)){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return position;
}