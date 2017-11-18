/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Essay Class
 * Created on November 17, 2017, 6:32 PM
 */

#include <cstdlib>
#include <iostream>

#include "essay.h"

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    Essay essay(30,20,20,20);
    
    //Output Data
    cout<<"Grammar: "<<essay.getGrScore()<<endl;
    cout<<"Spelling: "<<essay.getSpScore()<<endl;
    cout<<"Correct Length: "<<essay.getLtScore()<<endl;
    cout<<"Content: "<<essay.getCtScore()<<endl;
    cout<<"Total Points: "<<essay.getTotal()<<endl;
    
    cout<<"Grade: "<<essay.getGrade()<<endl;

    return 0;
}

