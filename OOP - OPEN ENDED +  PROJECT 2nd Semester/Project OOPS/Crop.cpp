#include "Crop.h"
#include "Validation.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

Crop::Crop(int id, string n, string g, string h) : cropID(id), name(n), growthStage(g), harvestDate(h) {}

void Crop::harvestCrop() {
    cout << GREEN << BOLD << "\n   Harvesting crop: " << name << " on " << harvestDate << "   " << RESET << endl;
    printSuccess("Harvest completed successfully!");
}

void Crop::addCrop() {
    printHeader("ADD NEW CROP");
    
    int id = getIntInput("Enter Crop ID: ");
    string n = getTextInput("Enter Crop Name: ");
    string g = getTextInput("Enter Growth Stage (Planting/Growing/Harvesting): ");
    string h = getTextInput("Enter Harvest Date (YYYY-MM-DD): ");

    ofstream fout("crops.txt", ios::app);
    fout << id << "," << n << "," << g << "," << h << endl;
    fout.close();
    
    printSuccess("Crop added successfully to the farming plan!");
}

void Crop::viewCrop() {
    ifstream fin("crops.txt");
    string line;
    
    printHeader("CROP MANAGEMENT");
    
    if (!fin) {
        printWarning("No crops found in the system. Please add crops first.");
        return;
    }
    
    cout << YELLOW << BOLD << "+---------------------------------------------------------------------+" << RESET << endl;
    cout << YELLOW << BOLD << "¦    " << CYAN << "ID" << YELLOW << "      ¦         " << CYAN << "NAME" << YELLOW << "         ¦   " << CYAN << "GROWTH STAGE" << YELLOW << "   ¦ " << CYAN << "HARVEST DATE" << YELLOW << " ¦" << RESET << endl;
    cout << YELLOW << BOLD << "+------------+----------------------+------------------+--------------¦" << RESET << endl;
    
    int count = 0;
    while (getline(fin, line)) {
        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);
        size_t pos3 = line.find(",", pos2 + 1);
        
        if (pos1 != string::npos && pos2 != string::npos && pos3 != string::npos) {
            string id = line.substr(0, pos1);
            string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string growth = line.substr(pos2 + 1, pos3 - pos2 - 1);
            string harvest = line.substr(pos3 + 1);
            
            // Color code growth stage
            string growthColor = BLUE;
            if (growth == "Harvesting") growthColor = GREEN;
            else if (growth == "Planting") growthColor = YELLOW;
            
            cout << YELLOW << "¦ " << setw(10) << left << id << " ¦ " 
                 << setw(20) << left << name << " ¦ " 
                 << growthColor << setw(16) << left << growth << YELLOW << " ¦ " 
                 << setw(12) << left << harvest << " ¦" << RESET << endl;
            count++;
        }
    }
    
    cout << YELLOW << BOLD << "+---------------------------------------------------------------------+" << RESET << endl;
    cout << GREEN << BOLD << "   Total Crops Registered: " << count << RESET << endl;
    
    fin.close();
}
