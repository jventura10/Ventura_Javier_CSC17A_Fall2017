/* 
 * File:   testscores.cpp
 * Author: Javier Ventura
 * Purpose: Test Scores Class Implementation
 * Created on December 1, 2017, 12:16 PM
 */

#include <iostream>
#include "testscores.h"

using namespace std;

//Constructor for Class
TestSc::TestSc(int score[]){
    for(int i=0;i<size;i++){
        if(score[i]<0 || score[i]>100){
            throw InvalidScore();
        }
        else{
            scores[i]=score[i];
        }
    }
    cout<<"Average of Test Scores is: "<<average(score)<<endl;
}

float TestSc::average(int score[]){
    float avg=0;
    for(int i=0;i<size;i++){
        avg=avg+score[i];
    }
    avg=avg/size;
    
    return avg;
}
