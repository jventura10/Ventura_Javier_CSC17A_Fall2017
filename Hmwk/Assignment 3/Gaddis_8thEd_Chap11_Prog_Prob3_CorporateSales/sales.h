/*
 * File:   sales.h
 * Author: Javier Ventura
 * Purpose: Hold Corporate Sales Data for 4 Divisions Using Structures
 * Created on October 2, 2017, 1:56 PM
 */

#ifndef SALES_H
#define SALES_H

#include <string>

using std::string;

struct SalesD{
    string div;
    unsigned int fstQ;
    unsigned int sndQ;
    unsigned int trdQ;
    unsigned int fthQ;
    unsigned int total;
    float avgSls;
}east,west,north,south;

#endif /* SALES_H */

