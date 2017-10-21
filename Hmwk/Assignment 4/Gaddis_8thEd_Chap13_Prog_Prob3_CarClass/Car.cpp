/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Car Class
 * Created on October 17, 2017, 6:10 PM
 */

#include <iostream>
#include <cstdlib>
#include <string>

#include "Car.h"

using namespace std;

Car::Car(int yearModel,string make)
{
    this->yearModel = yearModel;
    this->make = make;
    setSpeed(0);
}

int Car::getYearModel ()
{
    return yearModel ;
}

void Car::setYearModel (int yearModel )
{
    this->yearModel  = yearModel ;
}
string Car::getMake ()
{
    return make ;
}

void Car::setMake (string make )
{
    this->make  = make ;
}
int Car::getSpeed ()
{
    return speed ;
}

void Car::setSpeed (int speed )
{
    this->speed  = speed ;
}

int Car::accelerate()
{
   return speed += 5;
}
int Car::brake()
{
   return speed -= 5;
} 
void Car::output(){
    cout<< "This is the speed "<<speed <<endl;
}