/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: CSC 17A Project 1
 * Includes Binary File Concepts, V3 will add turn-based play to use 
 * structures with arrays and functions as well as memory allocation,C Strings
 * Created on October 31, 2017, 6:10 PM
 */

//Include Libraries, some also includes in respective header file implementations (.cpp files)
#include <cstdlib>  // C Standard Library
#include <iostream> // Input and Output Library
#include <fstream>  // Input and Output to Files
#include <string.h>   // String Library
#include <cstring>    // C String Library
#include <ctime>      // Time Library   

//Including Header Files
#include "game.h"
#include "player1.h"
#include "player2.h"

using namespace std;

int main(int argc, char** argv) {
    
    bool play=true;         // As long as play is true then game continues
    fstream fout;           // Stream Object to write to binary file
    ofstream data;
    char restart;           // Used to get response when game ends
    Game z;            // Creating Object for 
    Player1 x;
    Player2 y;
    
    z.printGame();      //Print out the name of the game
        
    x.setName();        //Set username for Player 1
    y.setName();        //Set username for player 2
        
    
    do{
        cout<<endl;
        x.setPos();         //Start Player 1 turn 
        
        
        if(x.getPos()>=100){
            cout<<"Player 1 Wins!"<<endl;
            cout<<endl;
            x.setWins();
            z.setGames();
            cout<<"Play Again? Y for Yes,N for No"<<endl;
            cin>>restart;
            if(restart=='Y'){
                x.reset();
                y.reset();
            }
            else{
                play=false;
                break;
            }
        }
        
        cout<<endl;         
        y.setPos();         //Start Player 2 turn
        if(y.getPos()>=100){
            cout<<"Player 2 Wins!"<<endl;
            cout<<endl;
            y.setWins();
            z.setGames();
            cout<<"Play Again? Y for Yes,N for No"<<endl;
            cin>>restart;
            if(restart=='Y'){
                x.reset();
                y.reset();
            }
            else{
                play=false;
                break;
            }
        }
        
        
        
    }while(play==true);
               
    
    //Writing to Text file
    data.open("stats.txt");
    data<<"Snakes and Ladders"<<endl;
    data<<"------------------"<<endl;
    data<<"Number of Games: ";
    data<<z.getGames()<<endl;
    data<<x.getName()<<endl;
    data<<x.getWins()<<endl;
    data<<y.getName()<<endl;
    data<<y.getWins()<<endl;
    data.close();
    
                    
    //Writing points to a binary file
    fout.open("Stats.dat",ios::out|ios::binary);
    fout.put(x.getWins());
    fout.put(y.getWins());
    
    
    return 0;
}
