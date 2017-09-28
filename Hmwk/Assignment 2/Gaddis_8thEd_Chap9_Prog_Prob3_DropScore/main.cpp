/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Drop Lowest Score from array of scores when taking average
 * Created on September 26, 2017, 9:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Function Prototypes
void sortTst(float *,int);  //Sorting Test Scores
float calcTst(float *,int); //Calculating Average Test Scores
void shwTst(float *,int);   //Show Test Scores

int main(int argc, char** argv) {
    //Declare Variables
    int num;        //Number of Test Scores
    float *tstSc;   //Test Scores, dynamically allocated
    float avg;      //Average of test scores
    
    //Prompt For Data
    cout<<"Enter the number of test scores,you wish to enter: ";
    cin>>num;
    
    tstSc=new float[num];
    for(int i=0;i<num;i++){
        cout<<"Enter Test Score "<<(i+1)<<": ";
        cin>>*(tstSc+i);
        while(*(tstSc+i)<0 || *(tstSc+i)>100){
            cout<<"Must be from 0 to 100. Re-enter: ";
            cin>>*(tstSc+i);
        }
    }
    
    //Call Functions
    sortTst(tstSc,num);
    cout<<"The Test Scores in Ascending Order: ";
    shwTst(tstSc,num);
    cout<<endl;
    avg=calcTst(tstSc,num);
    cout<<"The average test score after dropping the lowest is: "<<avg<<endl;
    
    //Prevent Memory Leak
    delete []tstSc;
    
    return 0;
}

void sortTst(float *scores,int num){
    //Local Variables
    float small;        //Smallest Score
    int sInd;           //Smallest Index
    for(int i =0;i<num-1;i++){
        small=*(scores+i);
        sInd=i;
        for(int j=i+1;j<num;j++){
            if(small>*(scores+j)){
                small=*(scores+j);
                sInd=j;
            }
        }
        *(scores+sInd)=*(scores+i);
        *(scores+i)=small;
    }
    
}

float calcTst(float *scores,int num){
    //Local Variables
    float sum=0.0;      //Sum of Test Scores 
    float avgSc;        //Average of Test Scores
    
    for(int i=1;i<num;i++){
        sum += *(scores+i);
    }
    avgSc=sum/(num-1.0);
    return avgSc;
}

void shwTst(float *scores,int num){
    for(int i=0;i<num;i++){
        cout<<*(scores+i)<<" ";

    }
}