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
        //Number of Games played in a session
        int nGames;     
        //Name of the game in C string
        char const *game{"Snakes and Ladders!"};  
    public:
        Game();
        ~Game();
        int getGames();
        void printGame();
        void setGames();
            
};


#endif /* GAME_H */

