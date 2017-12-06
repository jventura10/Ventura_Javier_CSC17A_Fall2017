/*
 * File:   testscores.h
 * Author: Javier Ventura 
 * Purpose: Test Scores Class Specification
 * Created on December 1, 2017, 12:04 PM
 */

#ifndef TESTSCORES_H
#define TESTSCORES_H

class TestSc{
private:
    int size=5;
    int scores[20];
public:
    class InvalidScore{
        
    };
    TestSc(int []);
    float average(int []);
};

#endif /* TESTSCORES_H */