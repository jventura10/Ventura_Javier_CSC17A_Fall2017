/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: CSC 17A Project 1 Version 1
 * Includes the base game, minimum viable solution,no concepts used yet
 * Created on October 31, 2017, 6:10 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(int argc, char** argv) {
    //Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int die1=rand()%6+1;    // 1 of two Die range is from 1 to 6
    int die2=rand()%6+1;    // 1 of two Die range is from 1 to 6
    int points=0;           // Two die added equals points added on to position
    int pos=0;              // Position on the board range is 1 to 100
    bool play=true;         //As long as bool is true then game continues
    
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
    
    

    return 0;
}

//Memory Allocation
//int y     //number of x
// float *x
//x=new float[y]

//Functions with Structures
//Pointers with arrays and arrays of structures, internally as well as externally.
//Use of character arrays as well as string objects.
//Reading and writing to binary files.