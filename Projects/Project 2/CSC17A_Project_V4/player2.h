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
        int pos;
        int points;
        string name;
        int wins;
    public:
        Player2();
        void setPos();
        int getPos();
        void setName();
        void setWins();
        int getWins();
        void reset();
        string getName();
        ~Player2();
};



#endif /* PLAYER2_H */

