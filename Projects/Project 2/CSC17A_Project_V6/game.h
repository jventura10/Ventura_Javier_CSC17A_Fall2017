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
        //Constructor
        Game();
        //Copy Constructor
        Game(const Game &);
        //Destructor Overriden by Inherited class destructors
        ~Game();
        //Get Number of games overall
        int getGames();
        //Print Game for Intro
        void printGame();
        //Set Number of games played
        void setGames();
            
};


#endif /* GAME_H */

