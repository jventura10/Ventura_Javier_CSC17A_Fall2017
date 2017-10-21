/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Word Counter MOD
 * Created on October 11, 2017, 5:59 PM
 */

#include <iostream>
#include <cstring>
#include <string>
#include <istream>

using namespace std;

//Function Prototypes
void wordC(char []);

int main(int argc, char** argv) {
    
    //Declare Variables
    const int size=50;
    char str[size];
    int words=0;
    
    //Prompt for String
    cout<<"Enter String: ";
    cin.getline(str,size);
    
    //Call Function
    wordC(str);

    
    return 0;
}

void wordC(char *str){
    //Local Variables
    int words=1;
    int counter=0;
    float avg=0;
    strlen(str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if((int)str[i]==32){
            words++;
        }
        else{
            counter++;
        }
    }
    avg=counter/(float)words;
    cout<<"Number of words in the string: "<<words<<endl;
    cout<<"Average number of letters in each word: "<<avg<<endl;
}