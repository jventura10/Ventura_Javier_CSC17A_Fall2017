/*
 * File:   date.cpp
 * Author: Javier Ventura
 * Purpose: Implementation of Date Class
 * Created on November 28, 2017, 3:53 PM
 */

#include <iostream>
#include "date.h"

using namespace std;

void Date::setDay(int d){
    //Input Validation
    if(d<1 || d>31){
        throw InvalidDay();
    }
    else{
        day=d;
    }
}
void Date::setMonth(int m){
    //Input Validation
    if(m<1 || m>12){
        throw InvalidMonth();
    }
    else{
        month=m;
    }
}

void Date::setYear(int y){
    year=y;
}

int Date::getDay(){
    return day;
}

int Date::getMonth(){
    return month;
}

int Date::getYear(){
    return year;
}

void Date::printFormat1(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

void Date::printFormat2(){
    switch(month){
        case 1:{
            cout<<"January";
            break;
        }
        case 2:{
            cout<<"February";
            break;
        }
        case 3:{
            cout<<"March";
            break;
        }
        case 4:{
            cout<<"April";
            break;
        }
        case 5:{
            cout<<"May";
            break;
        }
        case 6:{
            cout<<"June";
            break;
        }
        case 7:{
            cout<<"July";
            break;
        }
        case 8:{
            cout<<"August";
            break;
        }
        case 9:{
            cout<<"September";
            break;
        }
        case 10:{
            cout<<"October";
            break;
        }
        case 11:{
            cout<<"November";
            break;
        }
        case 12:{
            cout<<"December";
            break;
        }
    }
    cout<<" "<<day<<", "<<year<<endl;
}

void Date::printFormat3(){
    cout<<day<<" ";
    switch(month){
        case 1:{
            cout<<"January";
            break;
        }
        case 2:{
            cout<<"February";
            break;
        }
        case 3:{
            cout<<"March";
            break;
        }
        case 4:{
            cout<<"April";
            break;
        }
        case 5:{
            cout<<"May";
            break;
        }
        case 6:{
            cout<<"June";
            break;
        }
        case 7:{
            cout<<"July";
            break;
        }
        case 8:{
            cout<<"August";
            break;
        }
        case 9:{
            cout<<"September";
            break;
        }
        case 10:{
            cout<<"October";
            break;
        }
        case 11:{
            cout<<"November";
            break;
        }
        case 12:{
            cout<<"December";
            break;
        }
    }   
    cout<<" "<<year<<endl;
}