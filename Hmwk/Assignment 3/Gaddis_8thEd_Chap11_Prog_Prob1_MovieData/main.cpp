/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Movie Data with Structures
 * Created on October 2, 2017, 1:03 PM
 */

#include <cstdlib>
#include <iostream>
#include "data.h"


using namespace std;

//Function Prototypes
void dsply(Mdata movie);

int main(int argc, char** argv) {
    //Storing Values to Variables Members 
    frst.title="Rurouni Kenshin Samurai X: Trust & Betrayal";
    frst.drtr="Kazuhiro Furuhashi";
    frst.year=1999;
    frst.time=116;
    scnd.title="Goal! The Dream Begins";
    scnd.drtr="Danny Cannon";
    scnd.year=2005;
    scnd.time=118;
    
    //Call Functions
    cout<<"Movie 1"<<endl;
    cout<<"-------"<<endl;
    dsply(frst);
    cout<<endl;
    cout<<"Movie 2"<<endl;
    cout<<"-------"<<endl;
    dsply(scnd);
    
    return 0;
}

void dsply(Mdata movie){
    cout<<"Title: "<<movie.title<<endl;
    cout<<"Director: "<<movie.drtr<<endl;
    cout<<"Year Released: "<<movie.year<<endl;
    cout<<"Run Time (Minutes): "<<movie.time<<endl;
}