/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Car Class
 * Created on October 17, 2017, 6:10 PM
 */

#include <iostream>
#include <cstdlib>

#include "Car.h"

using namespace std;

int main(int argc, char** argv) {
    Car a(1994, "Lexus" );			//Pass by example car
    
    for(int i=0; i<=4;i++){		//For Loop To Accelerate
        a.accelerate();		
    	a.output();
    }
   
  for(int i=0; i<=4;i++){  	//For Loop to slow down car
      a.brake();
      a.output();
  }
    
    return 0;
}
