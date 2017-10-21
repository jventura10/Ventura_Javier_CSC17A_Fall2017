/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Freezing and Boiling Points with Class
 * Created on October 19, 2017, 11:25 PM
 */

#include <cstdlib>
#include <iostream>

#include "Temp.h"

using namespace std;

//Function Prototypes
void isFreezing(FreezingAndBoilingPoints);
void isBoiling(FreezingAndBoilingPoints);

int main(){
    //Declare Variables
    int tempE = 0;

    cout  << "Please enter a tempE in Fahrenheit: "<<endl;
    cin >> tempE;
    cout <<endl;
    FreezingAndBoilingPoints temp(tempE);
    isFreezing(temp);
    isBoiling(temp);
    return 0;
}


void isFreezing(FreezingAndBoilingPoints temp)
{
    cout << "These substances freeze at " << temp.getTemperature() << " degrees F:";
    cout<<endl;
    
    if (temp.isEthylFreezing())
    {
        cout << "Ethyl"<<endl;
    }
    
    if (temp.isOxygenFreezing())
    {
        cout << "Oxygen"<<endl;    }

    if (temp.isWaterFreezing())
    {
        cout << "Water"<<endl;
    }
    
    cout<<endl;
}


void isBoiling(FreezingAndBoilingPoints temp)
{
    cout << "These substances boil at " << temp.getTemperature() << " degrees F: ";
    cout<<endl;
    if (temp.isEthylBoiling())
    {
        cout << "Ethyl"<<endl;
    }

    if (temp.isOxygenBoiling())
    {
        cout << "Oxygen"<<endl;
    }

    if (temp.isWaterBoiling())
    {
        cout << "Water"<<endl;    }
    cout <<endl;
}