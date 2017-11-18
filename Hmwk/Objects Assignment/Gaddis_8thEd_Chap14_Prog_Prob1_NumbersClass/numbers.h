/*
 * File:   numbers.h
 * Author: Javier Ventura
 * Purpose: Header file, specification for numbers class
 * Created on November 10, 2017, 6:49 PM
 */

#ifndef NUMBERS_H
#define NUMBERS_H

class Numbers{
private:
    int num;
public:
    Numbers(int x){     //Constructor accepts nonnegative number
        num=x;
    }
    void print();
};


#endif /* NUMBERS_H */

