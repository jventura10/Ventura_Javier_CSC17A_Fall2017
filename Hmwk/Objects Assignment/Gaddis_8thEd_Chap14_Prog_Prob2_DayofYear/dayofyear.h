/*
 * File:   dayofyear.h
 * Author: Javier Ventura
 * Purpose: Specification for Day of the Year Class
 * Created on November 12, 2017, 10:07 AM
 */

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class Dayofyear{
    private:
        int day;
    public:
        Dayofyear(int day);
        ~Dayofyear();
        static void print(int day);
};

#endif /* DAYOFYEAR_H */

