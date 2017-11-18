/*
 * File:   numbers.cpp
 * Author: Javier Ventura
 * Purpose: Implementation for numbers class
 * Created on November 12, 2017, 6:52 PM
 */

#include <iostream>
#include <string>
#include <math.h>

#include "numbers.h"

using namespace std;

//Use string for translation
//Constructor declared and implemented in header file
void Numbers::print(){
    int n;
    
    //Declare String Objects
    string lssTwn[20]={"zero","one","two","three",
                       "four","five","six","seven",
                       "eight","nine","ten","eleven",
                       "twelve","thirteen","fourteen",
                       "fifteen","sixteen","seventeen",
                       "eighteen","nineteen"};
    string hund=" hundred ";
    string thou=" thousand ";
    string tens[]={"zero","ten","twenty","thirty","forty",
                   "fifty","sixty","seventy","eighty",
                   "ninety"};
    
    //Input Validation
    if(num<0){
        cout<<"Negative number not allowed!!"<<endl;
        num=abs(num);
    }
    n=num/1000;
    if(n>0){
        cout<<" "<<lssTwn[n]<<thou;
    }
    num%=1000;
    n=num/100;
    if(num>=20){
        n=num/10;
        if(n>0){
            cout<<tens[n]<<" ";
        }
    }
    else if(num>=10){
        cout<<lssTwn[num]<<" ";
        return;
    }
    num%=10;
    if(num>0){
        cout<<lssTwn[num];
    }
    cout<<" ";
}