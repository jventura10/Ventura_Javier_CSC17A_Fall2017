/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Reverse Array
 * Created on September 27, 2017, 6:57 PM
 */

#include <iostream>

using namespace std;

//Function Prototypes
int *rvrs(int [],int);

int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    int intg[SIZE];     
    int *revArr;        //Pointer to Array
    int n;              //Size of Array
    
    //Prompt For Data
    cout<<"Enter "<<SIZE<<" integers for the array: "<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>intg[i];
    }
    
    //Output Data
    cout<<"Elements in the original array: ";
    for(int i=0;i<SIZE;i++){
        cout<<intg[i]<<" ";
    }
    cout<<endl;
    
    revArr=rvrs(intg,SIZE);
    cout<<"Elements in Reverse: ";
    for(int i=0;i<SIZE;i++){
        cout<<revArr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

int *rvrs(int intArr[],int arrSze){
    int *newArr;
    int j=0;
    newArr= new int[arrSze];
    for(int i=arrSze-1;i>=0;i--){
        newArr[j]=intArr[i];
        j++;
    }
    return newArr;
}

