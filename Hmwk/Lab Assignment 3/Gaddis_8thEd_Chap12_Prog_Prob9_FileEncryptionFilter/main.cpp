/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Encrypt Message from file out to another file
 * Created on October 31, 2017, 4:27 PM
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    char j; 
    fstream fin,fout;   //Objects from fstream class
    
    //Open File to Read In From
    fin.open("Test1.txt",ios::in);
    
    //Open file to Encrypt to
    fout.open("Encrypt.txt",ios::out);
    
    //Loop for every character to get encrypted +10 ASCII Code Number
    while(fin.get(j)){
        fout.put(j+10);
    }
    
    //Close Files
    fin.close();
    fout.close();
    
    return 0;
}

