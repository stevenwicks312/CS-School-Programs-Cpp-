#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "InventoryItem.h"
#include <time.h>
using namespace std;

#define NUM 10

void showInventory(InventoryItem *items, int count);

int main()
{
    InventoryItem items[NUM];
    int count = 0;

    srand(time(NULL));

    for(int i = 0; i < NUM; i++)  {
        string desc = "Widget " + to_string(i+1);
        items[i].setDescription(desc);
        items[i].setCost (i * 0.75 + 1);
        items[i].setUnits(rand() % 100);
        count++;
    }

    cout << left;

    showInventory(items, count);

    return 0;
}

void showInventory(InventoryItem *items, int count)
{
    cout << left;

    cout << setw(15) << "Item" << setw(10) << "Cost" << setw(10) << "Qty" << endl;
    for(int i = 0; i < count; i++) {

        cout << setw(15) << items->getDescription();
        cout << setw(10) << items->getCost();
        cout << setw(10) << items->getUnits();
        cout << endl;
        items++;
    }
}
