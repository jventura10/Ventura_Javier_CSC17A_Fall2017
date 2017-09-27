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
void showArray(const int [],int);
void showArrPtr(int *[],int);

int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_DONATIONS=15; //Number of Donations
    
    int donations[NUM_DONATIONS] = {77, 100, 5, 45, 40,
                                    17, 87, 95, 65, 100,
                                    90, 15, 70, 55, 10};
    
    int *arrPtr[NUM_DONATIONS] = { 0, 0, 0, 0, 0,
                                   0, 0, 0, 0, 0,
                                   0, 0, 0, 0, 0};
    
    for(int count=0;count<NUM_DONATIONS;count++){
        arrPtr[count] = &donations[count];
    }
    
    arrSelectSort(arrPtr,NUM_DONATIONS);
    
    cout<<"The donations, sorted in ascending order are: "<<endl;
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
            if(*(arr[index])<*minElem){
                minElem=arr[index];
                minIndex=index;
            }
        }
        arr[minIndex]=arr[startScan];
        arr[startScan]=minElem;
    }
}

void showArray(const int arr[],int size){
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