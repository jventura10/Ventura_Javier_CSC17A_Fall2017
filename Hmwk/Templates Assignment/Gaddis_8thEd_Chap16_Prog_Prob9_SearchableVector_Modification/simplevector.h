/*
 * File:   simplevector.h
 * Author: Javier Ventura
 * Purpose: Simple Vector Template Class Specification
 * Created on December 1, 2017, 12:53 PM
 */

#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

template <class T>
class SimpleV{
    private:
        T *aptr;
        int arrSz;
        void memErr();
        void subErr();
    public:
        //Default Constructor
        SimpleV(){
            aptr=0;
            arrSz=0;
        }
        SimpleV(int);
        SimpleV(const SimpleV &);
        ~SimpleV();
        int size()const{
            return arrSz;
        }
        T getEle(int sub);
        T &operator[](const int &);
};


#endif /* SIMPLEVECTOR_H */

