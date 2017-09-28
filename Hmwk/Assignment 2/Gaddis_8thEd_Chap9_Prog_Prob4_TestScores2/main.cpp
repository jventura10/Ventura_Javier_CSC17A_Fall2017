/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: 
 * Created on September 26, 2017, 4:14 PM
 */

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

//Function Prototypes
float avg(int *,int);
void srtSc(int *,string *, int);
        
int main(int argc, char** argv) {
    //Declare Variables
    int *tstSc= new int[50];        //Test Scores Dynamically Allocated 
    string *names= new string[50];     //Name of student that goes with their score
    float avgSc;                    //Average of test scores
    int num;                        //Number of Test Scores
    
    //Prompt For Data
    cout<<"Enter the number of test scores you wish to enter: ";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"Enter Name: ";
        cin>>names[i];
        cout<<"Enter Test Score: ";
        cin>>tstSc[i];
        while(tstSc[i]<0 || tstSc[i]>100){
            cout<<"Enter Test Score: ";
            cin>>tstSc[i];
        }
    }
    
    //Call Functions and Output Data
    srtSc(tstSc,names,num);
    cout<<endl;
    cout<<"Name         Test Score"<<endl;
    cout<<"----         ----------"<<endl;
    for(int j=0;j<num;j++){
        cout<<names[j]<<"              ";
        cout<<tstSc[j]<<endl;
    }
    avgSc=avg(tstSc,num);
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Average Test Score: "<<avgSc<<endl;
 
    return 0;
}

float avg(int *score,int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=*(score+i);
    }
    return sum/n;    
}

void srtSc(int *arr,string *names, int n){
    //Local Variables 
    int minI;       //Min Index
    for(int i=0;i<n-1;i++){
        minI=i;
        for(int j=i+1;j<n;j++){
            if(*(arr+j)<*(arr+minI)){
                minI=j;
            }
            int temp= *(arr+minI);
            *(arr+minI)=*(arr+i);
            *(arr+i)=temp;
            string temp1=*(names+minI);
            *(names+minI)=*(names+i);
            *(names+i)=temp1;
        }
    }
}