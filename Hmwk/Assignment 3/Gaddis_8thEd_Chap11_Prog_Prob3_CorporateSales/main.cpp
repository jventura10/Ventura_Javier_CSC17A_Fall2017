/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Hold Corporate Sales Data for 4 Divisions Using Structures
 * Created on October 2, 2017, 1:56 PM
 */

#include <iostream>
#include "sales.h"

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    east.div="East Division";
    west.div="West Division";
    north.div="North Division";
    south.div="South Division";
            
    //Prompt for data
    cout<<"Enter First-Quarter Sales for the "<<east.div<<": $";
    cin>>east.fstQ;
    cout<<"Enter Second-Quarter Sales for the "<<east.div<<": $";
    cin>>east.sndQ;
    cout<<"Enter Third-Quarter Sales for the "<<east.div<<": $";
    cin>>east.trdQ;
    cout<<"Enter Fourth_Quarter Sales for the "<<east.div<<": $";
    cin>>east.fthQ;
    
    cout<<endl;
    cout<<"Enter First-Quarter Sales for the "<<west.div<<": $";
    cin>>west.fstQ;
    cout<<"Enter Second-Quarter Sales for the "<<west.div<<": $";
    cin>>west.sndQ;
    cout<<"Enter Third-Quarter Sales for the "<<west.div<<": $";
    cin>>west.trdQ;
    cout<<"Enter Fourth-Quarter Sales for the "<<west.div<<": $";
    cin>>west.fthQ;
    
    cout<<endl;
    cout<<"Enter First-Quarter Sales for the "<<north.div<<": $";
    cin>>north.fstQ;
    cout<<"Enter Second-Quarter Sales for the "<<north.div<<": $";
    cin>>north.sndQ;
    cout<<"Enter Third-Quarter Sales for the "<<north.div<<": $";
    cin>>north.trdQ;
    cout<<"Enter Fourth-Quarter Sales for the "<<north.div<<": $";
    cin>>north.fthQ;
    
    cout<<endl;
    cout<<"Enter First-Quarter Sales for the "<<south.div<<": $";
    cin>>south.fstQ;
    cout<<"Enter Second-Quarter Sales for the "<<south.div<<": $";
    cin>>south.sndQ;
    cout<<"Enter Third-Quarter Sales for the "<<south.div<<": $";
    cin>>south.trdQ;
    cout<<"Enter Fourth-Quarter Sales for the "<<south.div<<": $";
    cin>>south.fthQ;
    
    //Map Data or Calculations
    east.total=east.fstQ+east.sndQ+east.trdQ+east.fthQ;
    west.total=west.fstQ+west.sndQ+west.trdQ+west.fthQ;
    north.total=north.fstQ+north.sndQ+north.trdQ+north.fthQ;
    south.total=south.fstQ+south.sndQ+south.trdQ+south.fthQ;
    east.avgSls=east.total/4.0f;
    west.avgSls=west.total/4.0f;
    north.avgSls=north.total/4.0f;
    south.avgSls=south.total/4.0f;
    
    //Output Data
    cout<<endl;
    cout<<"East Division Total Sales: $"<<east.total<<endl;
    cout<<"East Division Average Sales per Quarter: $"<<east.avgSls<<endl;
    cout<<endl;
    cout<<"West Division Total Sales: $"<<west.total<<endl;
    cout<<"West Division Average Sales per Quarter: $"<<west.avgSls<<endl;
    cout<<endl;
    cout<<"North Division Total Sales: $"<<north.total<<endl;
    cout<<"North Division Average Sales per Quarter: $"<<north.avgSls<<endl;
    cout<<endl;
    cout<<"South Division Total Sales: $"<<south.total<<endl;
    cout<<"South Division Average Sales per Quarter: $"<<south.avgSls<<endl;
            
    return 0;
}

