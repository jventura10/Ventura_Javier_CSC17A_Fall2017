/*
 * File:   main.cpp
 * Author: Javier Ventura 
 * Purpose: Function Returns length of String
 * Created on October 12, 2017, 5:24 PM
 */

#include <iostream>
#include <cstring>

using namespace std;

int cntStr(string);

int main(int argc, char** argv) {

    //Declare Variables
    string str;
    int count;
    
    //Prompt for string
    cout<<"Enter a string: ";
    cin>>str;
    
    //Call Function
    count=cntStr(str);
    
    //Output Results
    cout<<endl;
    cout<<"The number of characters in the string is: "<<count<<endl;    
    
    return 0;
}

int cntStr(string str){
    //Local Variables
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}