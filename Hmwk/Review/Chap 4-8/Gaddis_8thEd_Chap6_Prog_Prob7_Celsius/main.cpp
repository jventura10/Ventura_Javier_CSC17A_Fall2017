/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Fahrenheit To Celsius Temp Table 
 * Created on September 7, 2017, 10:50 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes
float celsius(float);

int main(int argc, char** argv) {
    //Declare Variables
    float fTemp=0;        //Fahrenheit Temperatures from 0-20
    float cTemp;          //Celsius Temperatures converted from Fahrenheit
    
    //Create Table
    cout<<"Celsius Temperature Table"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Fahrenheit ---->  Celsius"<<endl;
    cout<<"-------------------------"<<endl;
    
    //Call Function
    for(int j=0;j<=20;j++){
        cTemp=celsius(fTemp);
        cout<<fixed<<setprecision(4)<<showpoint;
        cout<<fTemp++<<setw(18)<<cTemp<<endl;
    }

    return 0;
}

//******************************************************************************
//******************************************************************************
//                               Celsius                                      **
//Inputs:                                                                     ** 
//   F  ->  Fahrenheit Temperatures                                           **
//Output:                                                                     **   
//    C -> Celsius Temperatures                                               **
//******************************************************************************
//******************************************************************************

float celsius(float F){
    float C;
    C=((5.0/9.0)*(F-32.0));
    return C;
}
