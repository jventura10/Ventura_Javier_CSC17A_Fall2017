/*
 * File:   player2.h
 * Author: Javier Ventura
 * Purpose: Specification for Player 2 object class inherited from Game class
 * Created on December 7, 2017, 4:27 PM
 */

#ifndef PLAYER2_H
#define PLAYER2_H

#include "game.h"
#include <string>

using std::string;

class Player2:public Game{
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
        //constructor
        Player2();
        //Copy Constructor
        Player2(const Player2 &);
        //Set Position on Board
        void setPos();
        //Get Position to check where player is
        int getPos();
        //Set Desired Username
        void setName();
        //Set Number of Wins when player position reaches 100
        void setWins();
        //Get Number of Wins for Statistics
        int getWins();
        //Reset Position for new Game
        void reset();
        //Get Name for file
        string getName();
        //Destructor
        ~Player2();
};



#endif /* PLAYER2_H */

