/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: CSC 17A Project 1
 * Includes: V6 is final version with all class concepts in classes,templates,files
 * inheritance and polymorphism
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
    //Declare Variables Here
    // As long as play is true then game continues
    bool play=true;       
    // Stream Object to write to binary file
    fstream fout;     
    //Stream object to write to text file
    ofstream data;
    // Used to get response when game ends
    char restart;           
    // Creating Object for Game Class
    Game z;           
    // Creating Object for Player 1 Class
    Player1 x;
    //Creating Object for Player 2 Class
    Player2 y;
    //Choice for Menu 
    int choice;
    
    
    //Game Starts Here     
    //Set username for Player 1  
    x.setName();        
    //Set username for player 2
    y.setName();       
    
    //Print out the name of the game
    z.printGame(); 
    cout<<"1 - Play "<<endl;
    cout<<"2 - Change Names "<<endl;
    cout<<"3 - Quit Game "<<endl;
    
    cout<<endl;
    cout<<"Enter Choice: ";
    cin>>choice;
    cout<<endl;
    
    switch(choice){
        case 1:{
            do{
                cout<<endl;
                x.setPos();         //Start Player 1 turn 

                //Set condition if player wins
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

                //Start Player 2 turn
                cout<<endl;         
                y.setPos();         
                //Set condition if player Wins
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
            break;
        }
        case 2:{
            //Set username for Player 1  
            x.setName();        
            //Set username for player 2
            y.setName();    
            break;
            
        }
        case 3:{
            
            //Writing to Text file
            //Open File
            data.open("stats.txt");
            //Write to it Name of the Game
            data<<"Snakes and Ladders"<<endl;
            data<<"------------------"<<endl;
            //Print Number of Overall Games
            data<<"Number of Games: ";
            data<<z.getGames()<<endl;
            //Get Player 1 Name
            data<<x.getName()<<endl;
            //Get Number of wins for Player 1
            data<<x.getWins()<<endl;
            //Get Player 2 Name
            data<<y.getName()<<endl;
            //Get Number of wins for Player 2
            data<<y.getWins()<<endl;
            //Close File
            data.close();


            //Writing points to a binary file
            fout.open("Stats.dat",ios::out|ios::binary);
            fout.put(x.getWins());
            fout.put(y.getWins());
            break;
        }
        default:{
            cout<<"Must Pick Valid Choice in Game Menu"<<endl;
            cout<<endl;
            
        }
    }
        
    return 0;
}
