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
        int pos;
        int points;
        string name;
        int wins;
    public:
        Player1();
        void setPos();
        int getPos();
        void setName();
        void setWins();
        int getWins();
        string getName();
        void reset();
        ~Player1();
        
};

#endif /* PLAYER1_H */

