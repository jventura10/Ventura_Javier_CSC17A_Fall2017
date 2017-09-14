/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: COnvert Celsius Temperatures to Fahrenheit Temperatures
 * Created on August 30, 2017, 10:29 AM
 */

//System Libraries 
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float degC;  //Degrees Celsius used float for decimals
    float degF;  //Degrees Fahrenheit used float for decimals
    
    //Prompt or Input Data
    cout<<"This Program converts degrees Celsius to Fahrenheit. "<<endl;
    cout<<"Please Enter the degrees Celsius. Press enter when done."<<endl;
    cin>>degC;
    
    //Process Data
    degF=((9.0f * degC)/5.0f)+32.0f;
    
    //Output data
    cout<<endl;
    cout<<degC<<" Degrees Celsius is equal to "<<degF<<" Degrees Fahrenheit";
    cout<<endl;

    return 0;
}

