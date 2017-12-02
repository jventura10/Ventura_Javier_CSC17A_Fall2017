/*
 * File:   searchvector.h
 * Author: Javier Ventura 
 * Purpose: Search Vector Class Specification Inherited from Simple Vector Class
 * Created on December 1, 2017, 1:45 PM
 */

#ifndef SEARCHVECTOR_H
#define SEARCHVECTOR_H

#include "simplevector.h"

template <class T>
class SearchV:public SimpleV<T>{
    private:
        
    public:
        SearchV():SimpleV<T>(){}
        SearchV(int size):SimpleV<T>(size){}
        SearchV(const SearchV &);
        int FindIt(const T);
};


#endif /* SEARCHVECTOR_H */

