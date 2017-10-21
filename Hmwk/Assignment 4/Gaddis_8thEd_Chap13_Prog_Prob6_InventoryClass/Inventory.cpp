/*
 * File: Inventory.cpp
 * Author: Javier Ventura 
 * Purpose: Inventory Class
 * Created on October 17, 2017, 6:40 PM
 */

#include <iostream>
#include <cstdlib>
#include <string>

#include "Inventory.h"

using namespace std;

Inventory::Inventory (){
   itemNumber=0;
   quantity=0;
   cost=0;
   totalCost=0;
}
Inventory::Inventory (int itemNumber,double cost,int quantity){
this->itemNumber = itemNumber;
this->cost = cost;   
this->quantity = quantity; 
setTotalCost(cost*quantity);

}




int Inventory::getItemNumber ()
{
    return itemNumber ;
}

void Inventory::setItemNumber (int itemNumber )
{
    this->itemNumber  = itemNumber ;
}
int Inventory::getQuantity ()
{
    return quantity ;
}

void Inventory::setQuantity (int quantity )
{
    this->quantity=quantity ;
}


double Inventory::getCost ()
{
    return cost ;
}

void Inventory::setCost (double cost )
{
    this->cost= cost ;
}


double Inventory::getTotalCost ()
{
    return totalCost ;
}

void Inventory::setTotalCost (double totalCost )
{
    this->totalCost  = totalCost ;
}

void Inventory::output()
{
    cout << "Item Number: " << itemNumber
            << endl 
            << "Quantity: " << quantity << endl
            << "Cost : " << cost << endl
            << "Total Cost: " << totalCost<< endl<<endl;
}




