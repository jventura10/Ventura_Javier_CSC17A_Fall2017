/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: 
 * Created on December 1, 2017, 12:40 PM
 */

#include <cstdlib>
#include <iostream>
#include <new>
#include "searchvector.h"
#include "simplevector.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;  //Number of Elements
    int result;         //Stores Result
    
    SearchV<int> intTab(SIZE);  //Integer Table
    SearchV<int> fltTab(SIZE);  //Float Table
    
    //Filling Tables
    for(int i=0;i<SIZE;i++){
        intTab[i]=(i*2);
        fltTab[i]=(i*2.14);
    }
    
    //Output the Tables
    cout<<"Integer Table: "<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<intTab[i]<<" ";
    }
    cout<<endl;
    cout<<"Float Table: "<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<fltTab[i]<<" ";
    }
    cout<<endl;
    
    //Searching Methods
    cout<<"Searching for 6 in Integer Table..."<<endl;
    result=intTab.FindIt(6);
    if(result==-1){
        cout<<"Not Found in Table"<<endl;
    }
    else{
        cout<<"6 was found at Subscript "<<result<<endl;
    }

    cout<<"Searching for 12.84 in Float Table..."<<endl;
    result=fltTab.FindIt(12.84);
    if(result==-1){
        cout<<"Not Found in Table"<<endl;
    }
    else{
        cout<<"12.84 was found at Subscript "<<result<<endl;
    }
    return 0;
}

