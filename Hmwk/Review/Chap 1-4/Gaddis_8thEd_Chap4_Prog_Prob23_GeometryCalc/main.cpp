/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Geometry Calculator- Area of circle, rectangle, triangle
 * Created on September 3, 2017, 2:07 PM
 */

#include <iostream>

using namespace std;

//Global Constants 
float PI=3.141549; //PI constant used for Circle Area Calculation

int main(int argc, char** argv) {
    
    //Declare Variables
    bool run=true;  //Boolean to keep menu running
    float areaC;    //Area of Circle, float to include decimals
    float areaR;    //Area of Rectangle, float to include decimals
    float areaT;    //Area of Triangle , float to include decimals
    float rad;      //Radius of Circle, user inputs number
    float length;   //Length used for Rectangle area, user inputs number
    float width;    //Width used for Rectangle are, user inputs number
    float base;     //Base of triangle, user inputs number
    float height;   //Height of triangle, user inputs number
    int opt;        //Options in the switch menu
    
    
    do{
        cout<<"Geometry Calculator"<<endl;
        cout<<"Pick an option"<<endl;
        cout<<"(1)Area of Circle (2)Area of Rectangle (3)Area of Triangle";
        cout<<" (4)Quit Geometry Calculator"<<endl;
        cin>>opt;
        cout<<endl;
                
        switch(opt){
            case 1:{
                cout<<"Area of a circle:"<<endl;
                cout<<"Enter the radius of the circle"<<endl;
                cin>>rad;
                areaC=PI*(rad*rad);
                cout<<endl;
                cout<<"The area of the circle is "<<areaC<<endl;
                cout<<endl;
                break;
            }
            case 2:{
                cout<<"Area of a Rectangle:"<<endl;
                cout<<"Enter the length"<<endl;
                cin>>length;
                cout<<"Enter the width"<<endl;
                cin>>width;
                areaR=length*width;
                cout<<endl;
                cout<<"The area of the rectangle is "<<areaR<<endl;
                cout<<endl;
                break;
            }
            case 3:{
                cout<<"Area of a Triangle:"<<endl;
                cout<<"Enter the base of the triangle"<<endl;
                cin>>base;
                cout<<"Enter the height of the triangle"<<endl;
                cin>>height;
                areaT=base*height*.5;
                cout<<endl;
                cout<<"The area of the triangle is "<<areaT<<endl;
                cout<<endl;
                break;
            }
            case 4:{
                cout<<"Quitting Geometry Calculator :( "<<endl;
                return 0;
            }
        }           
    }while(run=true);
        
    return 0;
}

