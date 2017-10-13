/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Search for file and display 10 lines, or display all if file<=10 
 * Created on October 10, 2017, 10:46 AM
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables 
    string name;
    char line[80];
    
    //Declaring File Stream Object
    fstream infile;
    
    //Prompt for Name of File
    cout<<"Enter name of file: ";  //To Test program test1.txt and test2.txt 
    cin>>name;
    
    //Open File
    infile.open(name.c_str(),ios::in);
    
    //Check if File Exists
    if(!infile){
        cout<<"Error while opening file "<<endl;
    }
    else{
        int counter=1;
        cout<<endl;
        while(!infile.eof() && counter<=10){
            infile.getline(line, 81,'\n');
            cout<<line<<endl;
            counter++;
        }
        if(counter<10){
            cout<<"-------Entire File Has Been Displayed----------"<<endl;
        }
    }
    
    
    
    return 0;
}

