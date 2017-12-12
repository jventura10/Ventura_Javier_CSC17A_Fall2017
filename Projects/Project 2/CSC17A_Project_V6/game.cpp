/*
 * File:   game.cpp
 * Author: Javier Ventura
 * Purpose: Implementation of the game class
 * Created on December 7, 2017, 5:03 PM
 */

//Include Libraries
#include <iostream>
#include "game.h"

using namespace std;

//COnstructor
Game::Game(){
    nGames=0;
    
}

//Destructor
Game::~Game(){
    
}

//Intro print game 
void Game::printGame(){
    cout<<game<<endl;
    cout<<"-------------------"<<endl;
    cout<<endl;
}

//Set Number of games played
void Game::setGames(){
    nGames=nGames+1;
}

//Get number of games played for files
int Game::getGames(){
    return nGames;
}