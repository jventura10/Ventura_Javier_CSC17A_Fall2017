/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Movie Data Modification to Include Movie Profit
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
    frst.title="The Fast and the Furious: Tokyo Drift";
    frst.drtr="Justin Lin";
    frst.year=2006;
    frst.time=104;
    frst.rev=158500000;
    frst.cost=85000000;
    scnd.title="Goal! The Dream Begins";
    scnd.drtr="Danny Cannon";
    scnd.year=2005;
    scnd.time=118;
    scnd.rev=40185261;
    scnd.cost=33000000;
    
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
    cout<<"Profit: $"<<movie.rev-movie.cost<<endl;
}