/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Test Scores #1
 * Created on September 23, 2017, 9:53 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes
void srtTs(int*,int);       //Sorting Test Scores
float avgTs(int*,int);      //Average of Test Scores
void prnTs(int*,int);       //Printing the Test Scores

int main(int argc, char** argv) {
    
    //Declare Variables
    int *tstSco;   //Used to allocate array
    int size;      //Size user inputs, has int range
    int score;     //Scores the user will input for test scores [0,100]
    float avg;     //Average of Test Scores
    
    //Prompt For Data
    cout<<"Enter size of Array"<<endl;
    cin>>size;
    
    tstSco=new int[size];   //Allocating Array dynamically to hold scores

    cout<<"Enter "<<size<<" positive values for Test Scores"<<endl;
    for(int i=0;i<size;i++){  
        cout<<"Score "<<(i+1)<<": ";
        cin>>score;
        //Input Validation
        while(score<0 || score>100){                
            cout<<"Again Score "<<(i+1)<<": ";
            cin>>score;
        }
        tstSco[i]=score;        //Storing scores 
    }
    
    //Output Data while Calling Functions
    cout<<"Scores Before Sorting: ";
    prnTs(tstSco,size); 
    srtTs(tstSco,size);
    cout<<"Scores After Sorting: ";
    prnTs(tstSco,size);
    avg=avgTs(tstSco,size);
    cout<<"Average Test Score: "<<fixed<<setprecision(2)<<avg<<endl;
   
    return 0;
}

void srtTs(int *tstSco,int size){
    int *last=tstSco+size;
    for(int *start=tstSco;start<last-1;start++){
        for(int *next=start+1;next<last;next++){
            if(*next<*start){
                int temp=*start;
                *start=*next;
                *next=temp;
            }
        }
    }
    
}

float avgTs(int *tstSco,int size){
    int sum=0;
    float avg;
    int *current=tstSco;
    for(int i=0;i<size;i++){
        sum += *current;
        current++;
    }
    avg=(float)sum/size;
    return avg;
    
}

void prnTs(int *tstSco,int size){
    int *current=tstSco;
    for(int i=0;i<size;i++){
        cout<<*current<<"  ";
        current++;
    }
    cout<<endl;
}