#include "Equipment.h"
#include "Validation.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

Equipment::Equipment(int id, string n, string st, string t, int p)
    : equipmentID(id), name(n), status(st), type(t), plotID(p) {}

void Equipment::assignToPlot(int pid) { 
    plotID = pid; 
    printSuccess("Equipment assigned to plot successfully!");
}

void Equipment::save() {
    printHeader("ADD NEW EQUIPMENT");
    
    int id = getIntInput("Enter Equipment ID: ");
    string n = getTextInput("Enter Equipment Name: ");
    string st = getTextInput("Enter Status (Operational/Maintenance/Repair): ");
    string tp = getTextInput("Enter Equipment Type: ");

    ofstream fout("equipment.txt", ios::app);
    fout << id << "," << n << "," << st << "," << tp << "," << plotID << endl;
    fout.close();
    
    printSuccess("Equipment added successfully to the inventory!");
}

void Equipment::viewEquipment() {
    ifstream fin("equipment.txt");
    string line;
    
    printHeader("EQUIPMENT INVENTORY");
    
    if (!fin) {
        printWarning("No equipment found in the system. Please add equipment first.");
        return;
    }
    
    cout << MAGENTA << BOLD << "+----------------------------------------------------------------------------------+" << RESET << endl;
    cout << MAGENTA << BOLD << "¦    " << CYAN << "ID" << MAGENTA << "      ¦         " << CYAN << "NAME" << MAGENTA << "         ¦     " << CYAN << "STATUS" << MAGENTA << "     ¦      " << CYAN << "TYPE" << MAGENTA << "      ¦ " << CYAN << "PLOT ID" << MAGENTA << " ¦" << RESET << endl;
    cout << MAGENTA << BOLD << "+------------+----------------------+----------------+------------------+----------¦" << RESET << endl;
    
    int count = 0;
    while (getline(fin, line)) {
        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);
        size_t pos3 = line.find(",", pos2 + 1);
        size_t pos4 = line.find(",", pos3 + 1);
        
        if (pos1 != string::npos && pos2 != string::npos && pos3 != string::npos && pos4 != string::npos) {
            string id = line.substr(0, pos1);
            string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string status = line.substr(pos2 + 1, pos3 - pos2 - 1);
            string type = line.substr(pos3 + 1, pos4 - pos3 - 1);
            string plot = line.substr(pos4 + 1);
            
            // Color code status
            string statusColor = BLUE;
            if (status == "Maintenance") statusColor = YELLOW;
            else if (status == "Repair") statusColor = RED;
            
            cout << MAGENTA << "¦ " << setw(10) << left << id << " ¦ " 
                 << setw(20) << left << name << " ¦ " 
                 << statusColor << setw(14) << left << status << MAGENTA << " ¦ " 
                 << setw(16) << left << type << " ¦ " 
                 << setw(8) << left << plot << " ¦" << RESET << endl;
            count++;
        }
    }
    
    cout << MAGENTA << BOLD << "+----------------------------------------------------------------------------------+" << RESET << endl;
    cout << GREEN << BOLD << "   Total Equipment Items: " << count << RESET << endl;
    
    fin.close();
}
