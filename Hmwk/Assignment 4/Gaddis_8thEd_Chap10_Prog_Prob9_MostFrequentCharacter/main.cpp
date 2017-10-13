/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Most Frequent Character
 * Created on October 12, 2017, 8:19 PM
 */

#include <iostream>

using namespace std;

//Global Constant
const int SIZE=50;

//Function Prototypes
void mostFq(char *,int);

int main(int argc, char** argv) {
    //Declare Variables
    char seq[SIZE];
    
    cout<<"Enter string: ";
    cin.getline(seq,SIZE);
    
    //Call Function
    mostFq(seq,SIZE);

    return 0;
}

void mostFq(char *charac,int length){
    //Local Variables
    char ch;
    int i=0;
    int max=0;
    int y=0;
    int j,counter;
    
    while(charac[i]!='\0'){
        i++;
    }
    const char *begin;
    const char *end=charac+i;
    for(begin=charac;begin!=end;begin++){
        j=0;
        counter=0;
        while(charac[j]){
            if(*begin==charac[j]){
                counter++;
            }
            j++;
        }
        if(counter>max){
            max=counter;
            ch=*begin;
            y=0;
        }
        else if(counter == max && ch != *begin){
            y++;
        }
    }
    cout<<"Character that appears the most is "<<ch<<" which appears ";
    cout<<max<<" times "<<endl;
    if(y>0){
        cout<<"There is another character that appears the same amount of times";
        cout<<endl;
    }
}