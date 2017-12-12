/*
 * File:   player1.h
 * Author: Javier Ventura
 * Purpose: Specification for Player 1 object class inherited from Game class
 * Created on December 7, 2017, 4:27 PM
 */

#ifndef PLAYER1_H
#define PLAYER1_H

#include "game.h"
#include <string>

using std::string;

class Player1:public Game{
    private:
        //Position on the board
        int pos;
        //Sum of both die rolled
        int points;
        //Username of player
        string name;
        //Number of wins in a session
        int wins;
    public:
        //Constructor
        Player1();
        //Copy Constructor 
        Player1(const Player1 &obj);
        //Set Position
        void setPos();
        //Get Position to check if they won
        int getPos();
        //Set Username for player
        void setName();
        //Set wins if position is greater than or equal to 100
        void setWins();
        //Get Wins for files
        int getWins();
        //Get Name for Files
        string getName();
        //Reset Position for new Game
        void reset();
        //Destructor
        ~Player1();
        
};

#endif /* PLAYER1_H */

