#include "Inventory.h"
#include "Validation.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

Inventory::Inventory(int id, string n, int q, string t) : itemID(id), itemName(n), quantity(q), type(t) {}

void Inventory::addItem() {
    printHeader("ADD INVENTORY ITEM");
    
    int id = getIntInput("Enter Item ID: ");
    string n = getTextInput("Enter Item Name: ");
    int q = getIntInput("Enter Quantity: ");
    string t = getTextInput("Enter Item Type: ");

    ofstream fout("inventory.txt", ios::app);
    fout << id << "," << n << "," << q << "," << t << endl;
    fout.close();
    
    printSuccess("Item added successfully to the inventory!");
}

bool Inventory::useItem(int q) {
    if (q > quantity) {
        printError("Insufficient quantity available!");
        return false;
    }
    quantity -= q;
    printSuccess("Item used successfully! Quantity updated.");
    return true;
}

void Inventory::viewInventory() {
    ifstream fin("inventory.txt");
    string line;
    
    printHeader("INVENTORY MANAGEMENT");
    
    if (!fin) {
        printWarning("No inventory items found. Please add items first.");
        return;
    }
    
    cout << RED << BOLD << "+-------------------------------------------------------------------+" << RESET << endl;
    cout << RED << BOLD << "¦    " << CYAN << "ID" << RED << "      ¦         " << CYAN << "NAME" << RED << "         ¦  " << CYAN << "QUANTITY" << RED << "  ¦      " << CYAN << "TYPE" << RED << "      ¦" << RESET << endl;
    cout << RED << BOLD << "+------------+----------------------+------------+------------------¦" << RESET << endl;
    
    int count = 0;
    int totalItems = 0;
    
    while (getline(fin, line)) {
        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);
        size_t pos3 = line.find(",", pos2 + 1);
        
        if (pos1 != string::npos && pos2 != string::npos && pos3 != string::npos) {
            string id = line.substr(0, pos1);
            string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string quantity = line.substr(pos2 + 1, pos3 - pos2 - 1);
            string type = line.substr(pos3 + 1);
            
            // Color code quantity
            string qtyColor = GREEN;
            int qty = stoi(quantity);
            if (qty < 10) qtyColor = YELLOW;
            if (qty < 5) qtyColor = RED;
            
            cout << RED << "¦ " << setw(10) << left << id << " ¦ " 
                 << setw(20) << left << name << " ¦ " 
                 << qtyColor << setw(10) << left << quantity << RED << " ¦ " 
                 << setw(16) << left << type << " ¦" << RESET << endl;
            
            count++;
            totalItems += qty;
        }
    }
    
    cout << RED << BOLD << "+-------------------------------------------------------------------+" << RESET << endl;
    cout << GREEN << BOLD << "   Total Item Types: " << count << " | Total Quantity: " << totalItems << RESET << endl;
    
    fin.close();
}
