/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: US Dollars to Yen and Euros
 * Created on August 30, 2017, 6:51 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
float YENPD=98.93;  //Conversion Yen Per Dollar
float EURPD=0.74;   //Conversion Euro Per Dollar

int main(int argc, char** argv) {
    float dlrs; //Dollars user wants to convert
    float yen;  //Yen equal to dollars entered
    float euros; //Euros equal to dollars entered
    
    //Prompt for Data
    cout<<"Currency Conversion: "<<endl;
    cout<<"Enter the dollar amount to convert to Yen and Euros."<<endl;
    cin>>dlrs;
    
    //Map Data
    yen=dlrs*YENPD;
    euros=dlrs*EURPD;
    
    //Output Result
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<dlrs<<" Dollars is equal to "<<yen<<" Yen"<<endl;
    cout<<dlrs<<" Dollars is equal to "<<euros<<" Euros"<<endl;
    
    return 0;
}

