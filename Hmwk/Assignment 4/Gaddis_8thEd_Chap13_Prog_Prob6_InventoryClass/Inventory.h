/*
 * File:   Inventory.h
 * Author: Javier Ventura
 * Purpose: Inventory Class
 * Created on October 17, 2017, 6:40 PM
 */

#ifndef INVENTORY_H
#define INVENTORY_H


class Inventory{
    private:
        int itemNumber;
        int quantity;
        float cost;
        float totalCost;
    public:
        Inventory ();
        Inventory (int,double,int);
        int getItemNumber();
        void setItemNumber(int);
        int getQuantity();
        void setQuantity(int);
        double getCost();
        void setCost(double);
        double getTotalCost();
        void setTotalCost(double);
        void output();
};


#endif /* INVENTORY_H */

