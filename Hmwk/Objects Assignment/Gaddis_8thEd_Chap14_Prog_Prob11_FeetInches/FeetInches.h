/*
 * File:   FeetInches.h
 * Author: Javier Ventura
 * Purpose: Feet Inches Class
 * Created on November 17, 2017, 5:33 PM
 */

#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>
using namespace std;

class FeetInches{
private: 
    int feet;
    int inches;
    void simplify();
public:
    int multiply(int a){
        feet=a*feet;
        inches=a*inches;
        return feet;
    }
    
    FeetInches(int f=0,int i=0){
        feet=f;
        inches=i;
        simplify();}
    void setFeet(int f){
        feet=f;
    }
    void setInches(int i){
        inches=i;
        simplify();
    }
    int getFeet()const{
        return feet;
    }
    int getInches() const{
        return inches;
    }
    
    FeetInches operator + (const FeetInches &);
    FeetInches operator - (const FeetInches &);
    FeetInches operator ++();
    FeetInches operator ++(int);
    bool operator >= (const FeetInches &);
    bool operator <= (const FeetInches &);
    bool operator != (const FeetInches &);
    
    //Friends
    friend ostream &operator<<(ostream &, const FeetInches &);
    friend istream &operator>>(istream &,FeetInches &);
    
};


#endif /* FEETINCHES_H */

