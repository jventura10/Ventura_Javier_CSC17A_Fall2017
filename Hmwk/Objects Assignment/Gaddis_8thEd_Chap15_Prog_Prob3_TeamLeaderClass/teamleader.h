/*
 * File:   teamleader.h
 * Author: Javier Ventura
 * Purpose: Specification for Team Leader Class
 * Created on November 17, 2017, 4:39 PM
 */

#ifndef TEAMLEADER_H
#define TEAMLEADER_H

class TeamLeader: public Employee{
    private:
        int required;
        float salary;
        float Training;
        float bonus;
    public:
        TeamLeader();
        TeamLeader(const TeamLeader&);
        ~TeamLeader();
        void getDatap();
        void printp();  
};



#endif /* TEAMLEADER_H */

