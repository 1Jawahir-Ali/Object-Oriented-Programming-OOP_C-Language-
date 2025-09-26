#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
using namespace std;

class Inventory {
    int itemID;
    string itemName;
    int quantity;
    string type;
public:
    Inventory(int id = 0, string n = "", int q = 0, string t = "");
    void addItem();
    bool useItem(int q);
    void viewInventory();
};

#endif
