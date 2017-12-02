/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: STL Binary Search
 * Created on December 1, 2017, 7:26 PM
 */

#include <iostream>
#include <vector>

using namespace std;

//Function Prototype
bool bnrySch(vector<int> ,int ,int );

int main(int argc, char** argv) {
    //Declare Variables
    const int arrSz=18;     //Size of array
    int num;                //Number to be Searched
    int test[arrSz]={5658845, 450125, 7895122,
                     8777541, 8451277, 1302850,
                     8080152, 4562555, 5552012,
                     5050552, 7825877, 1250255,
                     1005231, 654231, 3852085,
                     7576651, 7881200, 4581002};
    vector<int> accts;
    bool result;
    
    //Initialize Vector
    for(int i=0;i<arrSz;i++){
        accts.push_back(test[i]);
    }
    
    //Search 
    cout<<"Enter Number to Search for : ";
    cin>>num;
    
    for(int i=0;i<arrSz;i++){
        for(int j=0;j<arrSz-1;j++){
            if(accts.at(j)>accts.at(j+1)){
                int temp=accts.at(j);
                accts.at(j)=accts.at(j+1);
                accts.at(j+1)=temp;
            }
        }
    }
    
    result=bnrySch(accts,arrSz,num);
    if(result==true){
        cout<<"Number entered found"<<endl;
    }
    else{
        cout<<"Number entered not found"<<endl;
    }
    
    return 0;
}

bool bnrySch(vector<int> array ,int num ,int value){
    int first=0;
    int last=num-1;
    int middle;
    bool found=false;
    
    while(!found && first<=last){
        middle=(first+last)/2;
        if(array.at(middle)==value){
            found=true;
        }
        else if(array.at(middle)>value){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return found;
}