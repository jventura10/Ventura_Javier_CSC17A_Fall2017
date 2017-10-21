/*
 * File: Temp.cpp
 * Author: Javier Ventura
 * Purpose: Freezing and Boiling Points with Class
 * Created on October 19, 2017, 11:25 PM
 */

#include <cstdlib>
#include <iostream>

#include "Temp.h"

using namespace std;

enum Freezing { ETHYLALCOHOLFREEZINGPOINT = -173, OXYGENFREEZINGPOINT = -362, WATERFREEZINGPOINT = 32 };
enum Boiling { ETHYLALCOHOLBOILINGPOINT = 172, OXYGENBOILINGPOINT = -306, WATERBOILINGPOINT = 212 };

FreezingAndBoilingPoints::FreezingAndBoilingPoints() 
{ 
    temperature = 0;
}
FreezingAndBoilingPoints::FreezingAndBoilingPoints(int temp) 
{ 
    temperature = temp; 
}
int FreezingAndBoilingPoints::getTemperature() 
{ 
            return temperature;
}
bool FreezingAndBoilingPoints::isEthylFreezing()
{
    if (getTemperature() <= ETHYLALCOHOLFREEZINGPOINT)
    { return true; }

    return false;
}


bool FreezingAndBoilingPoints::isOxygenFreezing()
{
    if (getTemperature() <= OXYGENFREEZINGPOINT)
    { return true; }

    return false;
}

bool FreezingAndBoilingPoints::isWaterFreezing()
{
    if (getTemperature() <= WATERFREEZINGPOINT)
    { return true; }

    return false;
}


bool FreezingAndBoilingPoints::isEthylBoiling()
{
    if (getTemperature() >= ETHYLALCOHOLBOILINGPOINT)
    { return true; }

    return false;
}


bool FreezingAndBoilingPoints::isOxygenBoiling()
{
    if (getTemperature() >= OXYGENBOILINGPOINT)
    { return true; }

    return false;
}


bool FreezingAndBoilingPoints::isWaterBoiling()
{
    if (getTemperature() >= WATERBOILINGPOINT)
    { return true; }

    return false;
}