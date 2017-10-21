/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Display 24 Lines of a File at a time
 * Created on October 10, 2017, 11:20 AM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    string name;
    char line[120];
    
    //Create File Stream Object
    fstream fin;
    
    //Prompt For Filename
    cout<<"Enter name of file: "; //test.txt & test4.txt are test files
    cin>>name;
    
    //Read File In
    fin.open(name.c_str(),ios::in);
    
    //Check File exists, opens correctly
    if(!fin){
        cout<<"Error Opening File "<<endl;
    }
    else{
        int counter=0;
        int x=0;
        while(!fin.eof()){
            if(counter>24){
                cout<<endl;
                cout<<"Press 1 to continue reading: ";
                cin>>x;
                cout<<endl;
                if(x==1){
                    counter=0;
                }
            }
            fin.getline(line,121,'\n');
            cout<<line<<endl;
            counter++;
        }
    }
    
    return 0;
}

