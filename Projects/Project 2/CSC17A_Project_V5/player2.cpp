/*
 * File:   player2.cpp
 * Author: Javier Ventura
 * Purpose: Implementation of player 2 class
 * Created on December 7, 2017, 5:03 PM
 */

#include <string>
#include <iostream>

#include "game.h"
#include "player2.h"

using namespace std;

Player2::Player2(){
    wins=0;
    pos=0;
    points=0;
}

void Player2::setPos(){
    srand(static_cast<unsigned int>(time(0)));
    
    int die1=rand()%6+1;    // 1 of two Die range is from 1 to 6
    int die2=rand()%6+1;    // 1 of two Die range is from 1 to 6
    int roll;               // Press 1 to roll, interface for rolling
    int bonus=rand()%10+1;  // Possible bonus points to move forward 1 to 10
    int drop=rand()%10+1;   // Possible random drop from 1 to 10
    
    
    cout<<"Player 2 Turn"<<endl;
    cout<<"Enter 1 to Roll Dice: ";
    cin>>roll;
    
    switch(roll){
        case 1:{
            cout<<"Rolling Dice..."<<endl;
            cout<<"You rolled: "<<die1<<" and "<<die2<<endl;
            points=die1+die2;
            pos=pos+points;
            
            //Set Traps and Ladder Jumps
            if(pos==4){
                cout<<"Ladder!"<<endl;
                pos=14;
            }
            else if(pos==9){
                cout<<"Ladder!"<<endl;
                pos=31;
            }
            else if(pos==13){
                cout<<"Ladder!"<<endl;
                pos=74;
            }
            else if(pos==66){
                cout<<"Ladder!"<<endl;
                pos=78;
            }
            else if(pos==18){
                cout<<"Ladder!"<<endl;
                pos=37;
            }
            else if(pos==28){
                cout<<"Ladder!"<<endl;
                pos=84;
            }
            else if(pos==21){
                cout<<"Ladder!"<<endl;
                pos=42;
            }
            else if(pos==51){
                cout<<"Ladder!"<<endl;
                pos=67;
            }
            else if(pos==71){
                cout<<"Ladder!"<<endl;
                pos=91;
            }
            else if(pos==80){
                cout<<"Ladder!"<<endl;
                pos=97;
            }
            else if(pos==32){
                cout<<"Ladder!"<<endl;
                pos=49;
            }
            else if(pos==17){
                cout<<"Snake!"<<endl;
                pos=7;
            }
            else if(pos==64){
                cout<<"Snake!"<<endl;
                pos=60;
            }
            else if(pos==62){
                cout<<"Snake!"<<endl;
                pos=19;
            }
            else if(pos==87){
                cout<<"Snake!"<<endl;
                pos=24;
            }
            else if(pos==54){
                cout<<"Snake!"<<endl;
                pos=34;
            }
            else if(pos==98){
                cout<<"Snake!"<<endl;
                pos=79;
            }
            else if(pos==95){
                cout<<"Snake!"<<endl;
                pos=75;
            }
            else if(pos==93){
                cout<<"Snake!"<<endl;
                pos=53;
            }
            else if(pos==55){
                cout<<"Snake!"<<endl;
                pos=3;
            }
            else if(pos==29){
                cout<<"Snake!"<<endl;
                pos=6;
            }


            //Random Bonus and Drop Points
            else if(pos==99){
                cout<<"Bonus Ladder!"<<endl;
                pos=pos-drop;
            }
            else if(pos==10){
                cout<<"Bonus Ladder!"<<endl;
                pos=pos+bonus;
            }
            else if(pos==50){
                cout<<"Bonus Ladder!"<<endl;
                pos=pos-drop;
            }
            else if(pos==76){
                cout<<"Bonus Ladder!"<<endl;
                pos=pos+bonus;
            }
            else{
                pos=pos+0;
            }

            
            cout<<"Current Place: "<<pos<<endl;
            cout<<endl;
            
            break;
        }
        default:{
            cout<<"You Must Enter 1 to Roll Dice"<<endl;
        }
    }
}  

int Player2::getPos(){
    return pos;
}

void Player2::setName(){
    cout<<"Enter desired username for Player 2: ";
    cin>>name;
}
 
void Player2::setWins(){
    wins=wins+1;

}

void Player2::reset(){
    pos=0;
}
        
int Player2::getWins(){
    return wins;
}
    
string Player2::getName(){
    return name;
}
    
Player2::~Player2(){
    
}
        