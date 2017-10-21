/* 
 * File:   Temp.h
 * Author: Javier Ventura
 * Purpose: Freezing and Boiling Points with Class
 * Created on October 19, 2017, 11:25 PM
 */

#ifndef TEMP_H
#define TEMP_H



class FreezingAndBoilingPoints{
    private:
        int temperature;       
    public:
        FreezingAndBoilingPoints();
        FreezingAndBoilingPoints(int temp);
        bool isEthylFreezing();
        bool isEthylBoiling();
        bool isOxygenFreezing();
        bool isOxygenBoiling();
        bool isWaterFreezing();
        bool isWaterBoiling();
        int getTemperature() ;       
};


#endif /* TEMP_H */

