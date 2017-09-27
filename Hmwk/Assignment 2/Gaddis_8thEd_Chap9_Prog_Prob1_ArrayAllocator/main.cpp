/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Dynamically Allocate Array of Integers
 * Created on September 24, 2017, 10:14 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Function Prototypes
int *getArr(int);

int main(int argc, char** argv) {
    //Declare Variables
    int num;
    int *arr;
    
    cout<<"Enter the number of elements: ";
    cin>>num;
    
    arr=getArr(num);
    
    //Output Data
    cout<<"The elements in the Dynamic Array: ";
    for(int i=0;i<num;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    
    //Prevent Memory Leak
    delete []arr;
    
    return 0;
}

int *getArr(int num){
    //Dynamic Allocation of array
    int *arrPtr=new int[num];
    
    for(int i=0;i<num;i++){
        cout<<"Enter the element "<<(i+1)<<": ";
        cin>>*(arrPtr+i);
    }
    return arrPtr;
}