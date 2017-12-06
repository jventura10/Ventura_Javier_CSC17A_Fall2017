/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Test Scores Class
 * Created on November 30, 2017, 8:49 PM
 */

#include <iostream>
#include "testscores.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int score[5];
    
    //Prompt for Data
    cout<<"Enter 5 test scores out of 100: "<<endl;
    for(int i=0;i<5;i++){
        cin>>score[i];
    }
    
    try{
        TestSc stdnt(score);
    }
    catch(TestSc::InvalidScore){
        cout<<"Error: Invalid Score must be from 0-100"<<endl;
        
    }
    
    return 0;
}

