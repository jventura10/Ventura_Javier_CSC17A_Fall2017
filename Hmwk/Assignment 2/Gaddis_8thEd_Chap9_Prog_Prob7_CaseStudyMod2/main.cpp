/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Dynamic Array to hold any set of Donations
 * Created on September 25, 2017, 10:13 AM
 */

#include <iostream>

using namespace std;

//Function Prototypes
void arrSelectSort(int *[],int);
void showArray(int [],int);
void showArrPtr(int *[],int);

int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_DONATIONS=15; //Number of Donations
    
    int donations[NUM_DONATIONS] = {5, 100, 5, 25, 10,
                                    5, 25, 5, 5, 100,
                                    10, 15, 10, 5, 10};
    
    int *arrPtr[NUM_DONATIONS] = { 0, 0, 0, 0, 0,
                                   0, 0, 0, 0, 0,
                                   0, 0, 0, 0, 0};
    
    for(int count=0;count<NUM_DONATIONS;count++){
        arrPtr[count] = &donations[count];
    }
    
    arrSelectSort(arrPtr,NUM_DONATIONS);
    
    cout<<"The donations, sorted in Descending order are: "<<endl;
    showArrPtr(arrPtr,NUM_DONATIONS);
    
    cout<<"The donations, in their original order are: "<<endl;
    showArray(donations,NUM_DONATIONS);
    

    return 0;
}

void arrSelectSort(int *arr[], int size){
    int startScan, minIndex;
    int *minElem;
    
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minElem=arr[startScan];
        for(int index=startScan+1;index<size;index++){
            if(*(arr[index])>*minElem){
                minElem=arr[index];
                minIndex=index;
            }
        }
        arr[minIndex]=arr[startScan];
        arr[startScan]=minElem;
    }
}

void showArray(int arr[],int size){
    for(int count=0;count<size;count++){
        cout<<arr[count]<<" ";
    }
    cout<<endl;
}

void showArrPtr(int *arr[],int size){
    for(int count=0;count<size;count++){
        cout<<*(arr[count])<<" ";
    }
    cout<<endl;
}