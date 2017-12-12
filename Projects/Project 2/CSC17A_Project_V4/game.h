/*
 * File:   game.h
 * Author: Javier Ventura
 * Purpose: Specification of Game Class that will be passed down to other classes
 * Created on December 7, 2017, 4:28 PM
 */

#ifndef GAME_H
#define GAME_H


#include <cstring>


class Game{
    protected:
        int nGames;     //Number of Games played in a session
        char const *game{"Snakes and Ladders!"};  //Name of the game in C string
    public:
        Game();
        ~Game();
        int getGames();
        void printGame();
        void setGames();
            
};


#endif /* GAME_H */

