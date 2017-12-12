/*
 * File:   game.cpp
 * Author: Javier Ventura
 * Purpose: Implementation of the game class
 * Created on December 7, 2017, 5:03 PM
 */

#include <iostream>
#include "game.h"

using namespace std;

Game::Game(){
    nGames=0;
    
}

Game::~Game(){
    
}

void Game::printGame(){
    cout<<game<<endl;
    cout<<"-------------------"<<endl;
    cout<<endl;
}


void Game::setGames(){
    nGames=nGames+1;
}


int Game::getGames(){
    return nGames;
}