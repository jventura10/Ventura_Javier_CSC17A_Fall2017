/*
 * File:   main.cpp
 * Author: Javier Ventura 
 * Purpose: Inventory Class
 * Created on October 17, 2017, 6:40 PM
 */

#include <iostream>
#include <cstdlib>

#include "Inventory.h"

using namespace std;

int main(int argc, char** argv) {

    Inventory a(1293, 10.30,12);
    a.output();
    
    Inventory b;
    b.output();
    
    
    
    return 0;
}

