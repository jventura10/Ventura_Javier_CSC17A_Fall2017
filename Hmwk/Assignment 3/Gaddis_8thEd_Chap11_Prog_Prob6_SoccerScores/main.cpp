/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Soccer Stats and Scores with Structures
 * Created on October 3, 2017, 4:40 PM
 */

#include <cstdlib>
#include <iostream>

#include "Scores.h"

using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    Player roster[12];     //12 Players on team
    int tmTot=0;           //Total Points scored by team
    unsigned int topP=0;     //Top Player Most Points
    int j=0;                 //Used to Output Top Players Information
    
    //Prompt for Data
    for(int i=0;i<12;i++){
        cout<<"Enter Players Name: ";
        cin>>roster[i].name;
        cout<<"Enter Players Jersey Number: ";
        cin>>roster[i].num;
        while(roster[i].num<=0){
            cout<<"Jersey Number must be greater than 0.Enter again: ";
            cin>>roster[i].num;
        }
        cout<<"Enter Points Scored by Player: ";
        cin>>roster[i].points;
        while(roster[i].points<0){
            cout<<"Points must be equal or greater than 0. Enter Again: ";
            cin>>roster[i].points;
        } 
        cout<<endl;
    }
    
    //Calculations
    for(int i=0;i<12;i++){
        tmTot=tmTot+roster[i].points;
    }
    
    //Map or Output Data
    cout<<endl;
    cout<<"Total Points scored by team: "<<tmTot<<endl;
    topP=roster[0].points;
    for(int i=1;i<12;i++){
        if(roster[i].points>topP){
            topP=roster[i].points;
            j=i;
        }
    }
    cout<<"Player with Most Points: "<<roster[j].name<<endl;
    cout<<"Player Jersey Number: "<<roster[j].num<<endl;
    cout<<"Points Scored: "<<topP<<endl;
    
    return 0;
}

