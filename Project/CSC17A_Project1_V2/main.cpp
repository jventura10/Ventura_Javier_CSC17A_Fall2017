/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: CSC 17A Project 1
 * 
 * Created on October 31, 2017, 6:10 PM
 */

#include <cstdlib>  //C Standard Library
#include <iostream> //Input and Output Library
#include <fstream>  //Input and Output to Files
#include <string.h>   //String Library


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
    fstream fout;
    
    
    cout<<"Snakes and Ladders! "<<endl;
    cout<<"------------------- "<<endl;
    cout<<"Enter your name: ";
    cin>>name;
    
    
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
    
    fout.open("Stats.dat",ios::)
    
    
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