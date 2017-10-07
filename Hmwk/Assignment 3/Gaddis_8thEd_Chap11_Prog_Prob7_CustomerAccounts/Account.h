/*
 * File:   Account.h
 * Author: Javier Ventura
 * Purpose: Structure with Customer Info 
 * Created on October 3, 2017, 9:21 PM
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using std::string;

struct Data{
    string name;
    string add;
    string city;
    string state;
    string zip;
    string num;
    float bal;
    string date;
};

#endif /* ACCOUNT_H */

