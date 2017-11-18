/*
 * File:   essay.h
 * Author: Javier Ventura
 * Purpose: Essay Class
 * Created on November 17, 2017, 6:35 PM
 */

#ifndef ESSAY_H
#define ESSAY_H

#include <iostream>
#include "gradedactvity.h"

using namespace std;

class Essay: public GradedActivity{
    protected: 
        char letter;
        float grammar;
        float spell;
        float length;
        float content;
        float total;
public:
    Essay(float grammar,float spell,float length,float content){
        do{
            if(grammar>30){
                cout<<"Grammar <= 30"<<endl;
            }
            if(grammar<=30){
                //setScore(grammar);
                setGrScore(grammar);
                total=getGrScore();
            }
        }while(grammar>30);
        do{
            if(length>20){
                cout<<"Correct Length <=20"<<endl;
            }
            if(length<=20){
                //setScore(length);
                setLtScore(length);
                total += getLtScore();
            }
        }while(length>20);
        do{
            if(spell>20){
                cout<<"Spelling <=20"<<endl;
            }
            if(spell<=20){
                //setScore(spell);
                setSpScore(spell);
                total+=getSpScore();
            }
        }while(spell>30);
        do{
            if(content>30){
                cout<<"Content <= 20"<<endl;
            }
            if(content<=30){
                //setScore(content);
                setCtScore(content);
                total+=getCtScore();
            }
        }while(content>30);
    }
    void setSpScore(float spell){
        this->spell=spell;
    }
    void setGrScore(float grammar){
        this->grammar=grammar;
    }
    void setLtScore(float length){
        this->length=length;
    }
    void setCtScore(float conten){
        this->content=content;
    }
    float getGrScore(){
        return grammar;
    }
    float getSpScore(){
        return spell;
    }
    float getLtScore(){
        return length;
    }
    float getCtScore(){
        return content;
    }
    float getTotal(){
        return total;
    }
    char getGrade(){
        if(total>=90){
            letter='A';
        }
        else if(total>=80 && total<90){
            letter='B';
        }
        else if(total>=70 && total<80){
            letter='C';
        }
        else if(total>=60 && total<70){
            letter='D';
        }
        else{
            letter='F';
        }
        return letter;
    }
    
};

#endif /* ESSAY_H */

