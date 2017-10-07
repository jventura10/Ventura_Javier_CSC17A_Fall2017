/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Structure with Customer Info 
 * Created on October 3, 2017, 9:21 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

//Function Prototypes
void chAcc(struct Data info[10]);
void dsply(struct Data info[10]);

int main(int argc, char** argv) {
    //Declare Variables
    int opt;
    bool x=true;
    Data info[10];
    
    //Initialize Accounts
    for(int v=0;v<9;v++){
        info[v].name="No Account Entered Yet";
        info[v].num="(XXX)-XXX-XXXX";
        info[v].topic="BLANK";
        info[v].fee=0;
    }
    
    do{
        cout<<"Menu "<<endl;
        cout<<"----"<<endl;
        cout<<"How can I help you?"<<endl;
        cout<<"(1)Enter New Speaker Information (2)Change Speaker Information ";
        cout<<"(3)Display all Data stored (4)Quit Program"<<endl;
        cin>>opt;
        cout<<endl;
        
        switch(opt){
            case 1:{
                chAcc(info);
                break;
            }
            case 2:{
                chAcc(info);
                break; 
            }
            case 3:{
                dsply(info);
                break;
            }
            case 4:{
                cout<<"Quitting Program..."<<endl;
                x=false;
                return 0;
            }
            default:{
                cout<<"Enter Valid Choice"<<endl;
                cin>>opt;
            }
            
        }
        
    }while(x=true);
    

    return 0;
}

void chAcc(struct Data info[10]){
    //Local Variables
    int j;
    
    cout<<"Enter Account Number [0-9]: ";
    cin>>j;
    while(j<0 || j>9){
        cout<<"Enter Speaker Account Number [0-9]: ";
        cin>>j;
    }
    cout<<"Enter Speaker Name: ";
    cin>>info[j].name;
    cout<<"Enter Telephone Number: ";
    cin>>info[j].num;
    cout<<"Enter Speaker Topic: ";
    cin>>info[j].topic;
    cout<<"Enter Fee Owed: $";
    cin>>info[j].fee;
    while(info[j].fee<0){
        cout<<"Fee must be 0 or greater: ";
        cin>>info[j].fee;
    }
    cout<<endl;
    
}
void dsply(struct Data info[10]){
    for(int j=0;j<9;j++){
        cout<<info[j].name<<endl;
        cout<<info[j].num<<endl;
        cout<<info[j].topic<<endl;
        cout<<"Fee Owed: $"<<info[j].fee<<endl;
        cout<<endl;
    }
}