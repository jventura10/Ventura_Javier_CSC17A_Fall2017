/*
 * File:   gradedactvity.h
 * Author: Javier Ventura
 * Purpose: Graded Activity Base Class
 * Created on November 17, 2017, 6:34 PM
 */

#ifndef GRADEDACTVITY_H
#define GRADEDACTVITY_H

class GradedActivity{
protected:
    float score;
public:
    void setscore(float s){
        score=s;
    }
    float getscore(){
        return score;
    }
};


#endif /* GRADEDACTVITY_H */

