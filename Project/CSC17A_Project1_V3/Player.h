/* 
 * File:   Player.h
 * Author: Javier Ventura
 * Purpose: CSC 17A Project 1 Structure Header File
 * Created on October 31, 2017, 6:19 PM
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using std::string;

struct Player{
    int pos=0; //Position of player on the board
    string name;    //Name of Player
    int points=0;     //Points the player gets from dice
    int wins=0;       //The wins a player has in a session
};

#endif /* PLAYER_H */