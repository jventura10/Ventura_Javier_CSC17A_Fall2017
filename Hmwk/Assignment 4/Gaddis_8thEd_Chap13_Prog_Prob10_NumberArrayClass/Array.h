/*
 * File:   main.cpp
 * Author:
 * Purpose: Number Array Class
 * Created on October 18, 2017, 6:37 PM
 */

#ifndef ARRAY_H
#define ARRAY_H

class NumArr{
    private:
        float* numA;
        int numE;
    public:
        NumArr(int);
        ~NumArr();
        void storeN();
        float getNum(int)const;
        float highV(int)const;
        float lowV(int)const;
        float avgV(int)const;
        
};


#endif /* ARRAY_H */

