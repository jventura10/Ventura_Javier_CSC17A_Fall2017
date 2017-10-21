/*
 * File:   Car.h
 * Author: Javier Ventura
 * Purpose: Car Class
 * Created on October 17, 2017, 6:10 PM
 */


#ifndef CAR_H
#define CAR_H

#include <string>

using std::string;

class Car{
    private:
        int yearModel;
        string make;
        int speed;
    public:
        Car (int,string);
        // Getter/Setter
        int getYearModel();
        void setYearModel(int);
        string getMake();
        void setMake(string);
        int getSpeed();
        void setSpeed(int);
        int accelerate();
        int brake();
        void output();
};

#endif /* CAR_H */

