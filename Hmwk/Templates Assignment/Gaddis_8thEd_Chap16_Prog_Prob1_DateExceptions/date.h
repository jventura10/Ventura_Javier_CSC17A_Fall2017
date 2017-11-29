/*
 * File:   date.h
 * Author: Javier Ventura 
 * Purpose: Specification for Date Class
 * Created on November 28, 2017, 3:33 PM
 */

#ifndef DATE_H
#define DATE_H

class Date{
private: 
    int day;
    int month;
    int year;
public:
    //Constructor
    Date(){
        day=0;
        month=0;
        year=0;
    }
    //Invalid Exception Classes
    class InvalidDay{
        
    };
    class InvalidMonth{
        
    };
    //Mutator Functions
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    //Access Functions
    int getDay(); 
    int getMonth();
    int getYear();
    //Print Functions
    void printFormat1();
    void printFormat2();
    void printFormat3();
    
};


#endif /* DATE_H */

