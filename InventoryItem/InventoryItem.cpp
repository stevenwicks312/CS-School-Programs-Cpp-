#include "InventoryItem.h"

/*
 * No args contructor
 */
InventoryItem::InventoryItem()
{
        pNum = "";
        description = "";
        cost = 0.0;
        units = 0;
}

InventoryItem::InventoryItem(string desc)
{

        description = desc;
        cost = 0.0;
        units = 0;
}

InventoryItem::InventoryItem(string pNum, string desc, double c, int q)
{
        partNum = pNum
        description = desc;
        cost = c;
        units = q;
}

InventoryItem::~InventoryItem()
{

}

void InventoryItem::setPartNum(string pNum)
{
    partNum = pNum;
}

void InventoryItem::setDescription(string desc)
{
    description = desc;
}

void InventoryItem::setCost(double c)
{
    cost = c;
}

void InventoryItem::setUnits(int u)
{
    units = u;
}

string InventoryItem::getPartNum()
{
    return partNum;
}

string InventoryItem::getDescription()
{
    return description;
}

double InventoryItem::getCost()
{
    return cost;
}

int InventoryItem::getUnits()
{
    return units;
}
