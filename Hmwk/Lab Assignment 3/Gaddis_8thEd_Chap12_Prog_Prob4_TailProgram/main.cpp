/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Print Last 10 Lines of File or all the file
 * Created on October 12, 2017, 1:44 PM
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    char name[11];
    char line[80];
    char ch;
    int count=0;
    
    //Prompt for name of file
    cout<<"Enter file name: ";  //test.txt and test1.txt are test files
    cin.getline(name,11);
    fstream fin(name,ios::in);
    
    //Count Number of Lines
    fin.get(ch);
    while(fin){
        if(ch=='\n'){
            count++;
        }
        fin.get(ch);
    }
    if(count<10){
        cout<<endl;
        cout<<"-----------The whole file is displayed---------"<<endl;
        cout<<endl;
    }
    fin.close();
    
    //Open for reading
    fin.open(name,ios::in);
    fin.get(ch);
    
    while(fin){
        if(ch=='\n'){
            count--;
        }
        if(count<=10){
            while(fin){
                cout<<ch;
                fin.get(ch);
            }
        }
        fin.get(ch);
    }
    fin.close();
    
    return 0;
}

