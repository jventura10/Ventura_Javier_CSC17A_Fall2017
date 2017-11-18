/*
 * File:   supervisor.h
 * Author: Javier Ventura 
 * Purpose: Specification for Supervisor Class inherited from employee class
 * Created on November 17, 2017, 3:41 PM
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H


class Supervisor: public Employee{
    private:
        int shift;
        float salary;
        float yearlybonus;
    public:
        Supervisor();
        Supervisor(const Supervisor&);
        ~Supervisor();
        void getDatap();
        void printp();  
};


#endif /* SUPERVISOR_H */
