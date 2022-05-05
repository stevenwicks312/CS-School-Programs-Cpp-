#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <string>

using namespace std;

class InventoryItem
{
    public:
        // ctors
        InventoryItem();
        InventoryItem(string desc);
        InventoryItem(string pNum, string desc, double c, int q);

        // dtor
        ~InventoryItem();

        // setters
        void setPartNum(string pNum);
        void setDescription(string desc);
        void setCost(double cost);
        void setUnits(int units);

        // getters
        string getDescription();
        double getCost();
        int getUnits();

    private:
        // attributes
        string pNum;
        string description;
        double cost;
        int units;
};

#endif // INVENTORYITEM_H
