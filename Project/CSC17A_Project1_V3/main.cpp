/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: CSC 17A Project 1
 * Includes Binary File Concepts, V3 will add turn-based play to use 
 * structures with arrays and functions as well as memory allocation,C Strings
 * Created on October 31, 2017, 6:10 PM
 */

#include <cstdlib>  //C Standard Library
#include <iostream> //Input and Output Library
#include <fstream>  //Input and Output to Files
#include <string.h>   //String Library
#include <cstring>    //C String Library

#include "Player.h"

using namespace std;

int main(int argc, char** argv) {
    //Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int points=0;       // Points are added up by dice rolled,max of 12 per roll 
    int pos=0;             // Position on Board out of 100
    string name;         // Name of Player
    int die1=rand()%6+1;    // 1 of two Die range is from 1 to 6
    int die2=rand()%6+1;    // 1 of two Die range is from 1 to 6
    bool play=true;         // As long as play is true then game continues
    fstream fout;           //Stream Object to write to binary file
    char const *game{"Snakes and Ladders!"};    //Name of the game in C string
    Player *x;              //Pointer to array for structure
    int users;              //Number of Users 
    
    
    cout<<game<<endl;
    cout<<"-------------------"<<endl;
    cout<<endl;
    
    cout<<"How Many Players: ";
    cin>>users;
    
    x=new int[users];
    
    for(int i=0;i<users;i++){
        cout<<"Enter Player "<<i+1<<" Name: ";
        cin>>x[i].name;
        cout<<endl;
    }
 
    
    do{
        cout<<"Rolling Dice..."<<endl;
        cout<<"You rolled: "<<die1<<" and "<<die2<<endl;
        cout<<endl;
        
        points=die1+die2;
        
        pos=pos+points;
        
        
        
        cout<<"Place: "<<pos<<endl;
        
        if(pos>=100){
            cout<<"You win!"<<endl;
            cout<<endl;
            play=false;
            break;
        }
        
        
    }while(play=true);                                                                                                                     
    
    //Writing points to a binary file
    fout.open("Stats.dat",ios::out|ios::binary);
    fout.put(points);
    
    
    return 0;
}


//Functions with Structures