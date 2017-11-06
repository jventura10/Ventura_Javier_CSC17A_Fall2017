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

//Function Prototypes
void clear(Player *x,int);

int main(int argc, char** argv) {
    //Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int points=0;       // Points are added up by dice rolled,max of 12 per roll 
    int pos=0;              // Position on Board out of 100
    string name;            // Name of Player
    int die1=rand()%6+1;    // 1 of two Die range is from 1 to 6
    int die2=rand()%6+1;    // 1 of two Die range is from 1 to 6
    int bonus=rand()%10+1;  // Possible bonus points to move forward 1 to 10
    int drop=rand()%10+1;   // Possible random drop from 1 to 10
    bool play=true;         // As long as play is true then game continues
    fstream fout;           // Stream Object to write to binary file
    char const *game{"Snakes and Ladders!"};    //Name of the game in C string
    Player *x;              // Pointer to array for structure
    int users;              // Number of Users 
    int roll;               // Used for switch statement in turns
    char restart;           // Used to get response when game ends
    
    
    cout<<game<<endl;
    cout<<"-------------------"<<endl;
    cout<<endl;
    
    cout<<"How Many Players: ";
    cin>>users;
    
    x=new Player[users];
    
    for(int i=0;i<users;i++){
        cout<<"Enter Player "<<i+1<<" Name: ";
        cin>>x[i].name;
        cout<<endl;
    }
 
    
    do{
        for(int i=0;i<users;i++){
            cout<<"Player "<<i+1<<" Turn: "<<endl;
            cout<<"Enter 1 to Roll Dice: ";
            cin>>roll;
            
            switch(roll){
                case 1:{
                    cout<<"Rolling Dice..."<<endl;
                    cout<<"You rolled: "<<die1<<" and "<<die2<<endl;
                    x[i].points=die1+die2;
                    x[i].pos=x[i].pos+x[i].points;
                    
                    //Set Traps and Ladder Jumps
                    if(x[i].pos==4){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=14;
                    }
                    else if(x[i].pos==9){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=31;
                    }
                    else if(x[i].pos==13){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=74;
                    }
                    else if(x[i].pos==66){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=78;
                    }
                    else if(x[i].pos==18){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=37;
                    }
                    else if(x[i].pos==28){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=84;
                    }
                    else if(x[i].pos==21){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=42;
                    }
                    else if(x[i].pos==51){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=67;
                    }
                    else if(x[i].pos==71){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=91;
                    }
                    else if(x[i].pos==80){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=97;
                    }
                    else if(x[i].pos==32){
                        cout<<"Ladder!"<<endl;
                        x[i].pos=49;
                    }
                    else if(x[i].pos==17){
                        cout<<"Snake!"<<endl;
                        x[i].pos=7;
                    }
                    else if(x[i].pos==64){
                        cout<<"Snake!"<<endl;
                        x[i].pos=60;
                    }
                    else if(x[i].pos==62){
                        cout<<"Snake!"<<endl;
                        x[i].pos=19;
                    }
                    else if(x[i].pos==87){
                        cout<<"Snake!"<<endl;
                        x[i].pos=24;
                    }
                    else if(x[i].pos==54){
                        cout<<"Snake!"<<endl;
                        x[i].pos=34;
                    }
                    else if(x[i].pos==98){
                        cout<<"Snake!"<<endl;
                        x[i].pos=79;
                    }
                    else if(x[i].pos==95){
                        cout<<"Snake!"<<endl;
                        x[i].pos=75;
                    }
                    else if(x[i].pos==93){
                        cout<<"Snake!"<<endl;
                        x[i].pos=53;
                    }
                    else if(x[i].pos==55){
                        cout<<"Snake!"<<endl;
                        x[i].pos=3;
                    }
                    else if(x[i].pos==29){
                        cout<<"Snake!"<<endl;
                        x[i].pos=6;
                    }
                    
                    
                    //Random Bonus and Drop Points
                    else if(x[i].pos==99){
                        cout<<"Bonus Ladder!"<<endl;
                        x[i].pos=x[i].pos-drop;
                    }
                    else if(x[i].pos==10){
                        cout<<"Bonus Ladder!"<<endl;
                        x[i].pos=x[i].pos+bonus;
                    }
                    else if(x[i].pos==50){
                        cout<<"Bonus Ladder!"<<endl;
                        x[i].pos=x[i].pos-drop;
                    }
                    else if(x[i].pos==76){
                        cout<<"Bonus Ladder!"<<endl;
                        x[i].pos=x[i].pos+bonus;
                    }
                    else{
                        x[i].pos=x[i].pos+0;
                    }
                    
                    cout<<"Current Place: "<<x[i].pos<<endl;
                    cout<<endl;
                    if(x[i].pos>=100){
                        cout<<"You win!"<<endl;
                        cout<<endl;
                        x[i].wins++;
                        cout<<"Current wins for Player "<<i+1<<": "<<x[i].wins<<endl;
                        cout<<endl;
                        break;
                    }   
                    break;
                }
                default:{
                    cout<<"You Must Enter 1 to Roll Dice"<<endl;
                }
            }
            if(x[i].pos>=100){
                cout<<"Restart and Play Again? Y for Yes and N for No "<<endl;
                cin>>restart;
                if(restart=='Y'){
                    clear(x,users);
                    cout<<endl;
                }
                else{
                    cout<<"Quitting Game... :("<<endl;
                    return 0;
                }             
            }
        }

        
    }while(play=true);                                                                                                                     
    
    //Writing points to a binary file
    for(int i=0;i<users;i++){
        fout.open("Stats.dat",ios::out|ios::binary);
        fout.put(*game);
        fout.put(x[i].wins);
    }
    
    return 0;
}

//Functions with Structures
void clear(Player *x,int n){
    for(int i=0;i<n;i++){
        x[i].pos=0;
    }
}