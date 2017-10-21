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

int main(int argc, char** argv) {
    int noEle;
    int retEle;
    
    cout<<"Enter number of elements in the array: ";
    cin>>noEle;
    while(noEle<=0){
        cout<<"Must be at least 1, Enter number of elements in the array: ";
        cin>>noEle;
    }
    NumArr obj(noEle);
    for(int i=0;i<noEle;i++){
        obj.storeN();
    }
    while(1){
        cout<<"What element do you wish to retrieve: ";
        cin>>retEle;
        if(retEle>noEle){
            cout<<"Invalid Index "<<endl;
        }
        else{
            break;
        }
    }
    cout<<endl;
    cout<<"The value in index "<<retEle<<" is "<<obj.getNum(retEle)<<endl;
    cout<<"The highest value is : "<<obj.highV(noEle)<<endl;
    cout<<"The lowest value is: "<<obj.lowV(noEle)<<endl;
    cout<<"The average of the elements is: "<<obj.avgV(noEle)<<endl;

    return 0;
}

