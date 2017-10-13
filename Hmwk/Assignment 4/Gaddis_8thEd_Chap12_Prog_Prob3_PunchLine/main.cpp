/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Different Functions Call on different files
 * Created on October 12, 2017, 11:44 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <valarray>

using namespace std;

//Function Prototypes
void getjoke(fstream &);
void punchl(fstream &);

int main(int argc, char** argv) {
    //Declare Variables
    fstream jokeF,punchF;
    
    //Open jokes.txt File
    jokeF.open("jokes.txt",ios::in);
    
    //Print Error if it does not exist
    if(jokeF.fail()){
        cout<<"Error Opening File"<<endl;
    }
    
    //Call Function and Close File
    getjoke(jokeF);
    jokeF.close();
    
    //Open Punch Line File
    punchF.open("punch.txt",ios::in);
    
    //Print Error if it does not exist
    if(punchF.fail()){
        cout<<"Error Opening File"<<endl;
    }
    
    //Call Function and Close File
    punchl(punchF);
    punchF.close();

    return 0;
}

void getjoke(fstream &file){
    //Local Variables
    char ch;
    
    //Read Character
    file.get(ch);
    
    while(!file.fail()){
        cout<<ch;
        file.get(ch);
    }
    cout<<endl;
}
void punchl(fstream &file){
    //Local Variables
    int i=3;
    char ch;
    char line [30];
    
    //Move to end of file
    file.seekg(0L,ios::end);
    
    //Back 3 Positions
    file.seekg(-3L,ios::end);
    
    //Get Character until new line 
    ch=file.get();
    while(ch!='\n'){
        file.seekg(-i,ios::end);
        ch=file.get();
        i++;
    }
    file.getline(line,i);
    cout<<line<<endl;
}