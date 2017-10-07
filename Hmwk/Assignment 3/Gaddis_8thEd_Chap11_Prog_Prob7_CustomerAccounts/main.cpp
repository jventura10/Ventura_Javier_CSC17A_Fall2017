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
        info[v].add="N/A";
        info[v].city="N/A";
        info[v].state="N/A";
        info[v].zip="N/A";
        info[v].num="(XXX)-XXX-XXXX";
        info[v].bal=0;
        info[v].date="MM/DD/YYYY";
    }
    
    do{
        cout<<"Menu "<<endl;
        cout<<"----"<<endl;
        cout<<"How can I help you?"<<endl;
        cout<<"(1)Enter New Account Information (2)Change Account Information ";
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
        cout<<"Enter Account Number [0-9]: ";
        cin>>j;
    }
    cout<<"Enter Name on Account: ";
    cin>>info[j].name;
    cout<<"Enter address: ";
    cin>>info[j].add;
    cout<<"Enter City: ";
    cin>>info[j].city;
    cout<<"Enter State: ";
    cin>>info[j].state;
    cout<<"Enter Zip Code: ";
    cin>>info[j].zip;
    cout<<"Enter Telephone Number: ";
    cin>>info[j].num;
    cout<<"Enter Balance on Last Statement: $";
    cin>>info[j].bal;
    while(info[j].bal<0){
        cout<<"Balance must be 0 or greater: ";
        cin>>info[j].bal;
    }
    cout<<"Enter Date of Last Payment (MM/DD/YYYY): ";
    cin>>info[j].date;
    cout<<endl;
    
}
void dsply(struct Data info[10]){
    for(int j=0;j<9;j++){
        cout<<info[j].name<<endl;
        cout<<info[j].add<<endl;
        cout<<info[j].city<<endl;
        cout<<info[j].state<<endl;
        cout<<info[j].zip<<endl;
        cout<<info[j].num<<endl;
        cout<<"$"<<info[j].bal<<endl;
        cout<<info[j].date<<endl;
        cout<<endl;
    }
}