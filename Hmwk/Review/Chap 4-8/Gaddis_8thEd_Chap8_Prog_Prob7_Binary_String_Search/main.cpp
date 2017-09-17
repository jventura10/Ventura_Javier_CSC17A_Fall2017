/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Binary String Search
 * Created on September 10, 2017, 5:58 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Function Prototypes
void srtStr(string [],int);
int binSrc(string [],int,string);

int main(int argc, char** argv) {
    
    //Declare Variables
    const int SIZE=20;
    int rslt;
    string name;
    
    string list[SIZE]={     "Javier","Roberto","Oscar",
                            "Daniel","Alex","Julian",
                            "Frank","Shisui","Neji",
                            "Peter","Juan","Steven",
                            "Greg","Beth","Rick",
                            "Mark","Allen","Jeff",
                            "Joe","Cathy"};
    
    cout<<"Enter the Name you want to search: ";
    cin>>name;
    
    srtStr(list,SIZE); //Calling Sort String before Binary Search
    
    rslt=binSrc(list,SIZE,name); //Returning Result from method to result
    
    if(rslt==-1){
        cout<<"Name does not exist in the list."<<endl;
    }
    else{
        cout<<"Element name: "<<name<<" found at index ";
        cout<<rslt+1<<" in the list"<<endl;
    }
    cout<<endl;
    cout<<"Names on List: "<<endl;
    
    for(int index=0;index<SIZE;index++){
        cout<<index+1<<right<<setw(10)<<list[index]<<endl;
    }
   
    
    return 0;
}

//Using Selection Sort Method 
void srtStr(string names[],int size){
    int stScn;
    int minIn;
    string minVal;
    
    for(stScn=0;stScn<(size-1);stScn++){
        minVal=stScn;
        minVal=names[stScn]; //Assuming Start Position is Min Value String
        
        for(int index=stScn+1;index<size;index++){
            if(names[index].compare(minVal)<0){
                minVal=names[index];
                minIn=index;
            }
        }
        
        names[minIn]=names[stScn];
        names[stScn]=minVal;        //Putting Min Value String at Start position
    } 
}

//Function takes string array, size and name to be searched and returns -1 if 
//not found
int binSrc(string list[],int SIZE,string name){
    //Variables for Function
    int first=0;      //First Array Element
    int last=SIZE-1;  //Last Array element  
    int middle;       //Midpoint of Search
    int pos=-1;       //Position of Search Value
    bool found=false; //Set Value to False
    
    while(!found && first<=last){
        middle=(first+last)/2; //Calculate Midpoint 
        
        if(list[middle].compare(name)==0){
            found=true;
            pos=middle;
        }
        else if(list[middle].compare(name)>0){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return pos;
}
