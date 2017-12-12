/*
 * File:   object.h
 * Author:Javier Ventura
 *
 * Created on December 10, 2017, 12:01 PM
 */

#ifndef OBJECT_H
#define OBJECT_H


template <class T> 
class Object{
    private:
        int num;
        int *x;
    public:
        Object();
        void setX();
        ~Object();
        
};

#endif /* OBJECT_H */

