/* 
 * File:   productionworker.h
 * Author: Javier Ventura 
 * Purpose: Specification for Production Worker Class inherited from employee class
 * Created on November 17, 2017, 2:47 PM
 */

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "employee.h"

class ProductionWorker: public Employee{
    private:
        int shift;
        double rate;
    public:
        ProductionWorker();
        ProductionWorker(const ProductionWorker&);
        ~ProductionWorker();
        void getDatap();
        void printp();  
};

#endif /* PRODUCTIONWORKER_H */