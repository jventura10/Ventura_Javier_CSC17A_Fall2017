/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: 
 * Created on October 11, 2017, 7:22 PM
 */

#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare Variables
    char first[10];
    char middle[15];
    char last[15];
    char name[45];
    int i=0,j=0;
    int opt;
    
    //Identify if user has middle name
    cout<<"Do You have a middle name? (1)Yes (2)No"<<endl;
    cin>>opt;
    
    switch(opt){
        case 1:{
            cout<<"Enter First Name: ";
            cin>>first;
            cout<<"Enter Middle Name: ";     
            cin>>middle;
            cout<<"Enter Last Name: ";
            cin>>last;

            //Copy Last Name
            while(last[i]!='\0'){
                name[j]=last[i];
                i++;
                j++;
            }
            name[j]=','; //Add Comma to fourth array 
            j++;
            name[j]=' '; //Add Extra Space to Fourth array
            j++;

            //Copy First Name
            i=0;        
            while(first[i]!='\0'){
                name[j]=first[i];
                i++;
                j++;        
            }
            name[j]=' ';    //Add space between first and middle
            j++;

            //Copy Middle Name
            i=0;
            while(middle[i] !='\0'){
                name[j]=middle[i];
                i++;
                j++;
            }
            name[j]='\0';
            cout<<endl;
            cout<<name<<endl;
            break;
        }
        case 2:{
            cout<<"Enter Full Name (First Middle Last): ";
            cin>>first>>last;

            //Copy Last Name
            while(last[i]!='\0'){
                name[j]=last[i];
                i++;
                j++;
            }
            name[j]=','; //Add Comma to fourth array 
            j++;
            name[j]=' '; //Add Extra Space to Fourth array
            j++;

            //Copy First Name
            i=0;        
            while(first[i]!='\0'){
                name[j]=first[i];
                i++;
                j++;        
            }
            name[j]='\0';
            cout<<endl;
            cout<<name<<endl;
            break;
        }
        default:{
            cout<<"Enter a valid response 1 or 2...";
            cin>>opt;
        }
    }
    
    return 0;
}

