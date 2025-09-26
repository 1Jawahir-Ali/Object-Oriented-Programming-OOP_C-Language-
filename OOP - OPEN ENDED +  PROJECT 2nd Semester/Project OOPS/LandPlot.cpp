#include "LandPlot.h"
#include "Validation.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

LandPlot::LandPlot(int id, double s, string loc, int c) : plotID(id), size(s), location(loc), cropID(c) {}

void LandPlot::assignCrop(int c) { 
    cropID = c; 
    printSuccess("Crop assigned to land plot successfully!");
}

void LandPlot::save() {
    printHeader("ADD LAND PLOT");
    
    int id = getIntInput("Enter Plot ID: ");
    double s = getDoubleInput("Enter Plot Size (acres): ");
    string loc = getTextInput("Enter Location: ");

    ofstream fout("landplots.txt", ios::app);
    fout << id << "," << s << "," << loc << "," << cropID << endl;
    fout.close();
    
    printSuccess("Land plot saved successfully to the system!");
}

void LandPlot::viewStatus() {
    ifstream fin("landplots.txt");
    string line;
    
    printHeader("LAND PLOTS MANAGEMENT");
    
    if (!fin) {
        printWarning("No land plots found. Please add land plots first.");
        return;
    }
    
    cout << BLUE << BOLD << "+---------------------------------------------------------+" << RESET << endl;
    cout << BLUE << BOLD << "¦   " << CYAN << "PLOT ID" << BLUE << "   ¦   " << CYAN << "SIZE" << BLUE << "    ¦    " << CYAN << "LOCATION" << BLUE << "      ¦ " << CYAN << "CROP ID" << BLUE << "  ¦" << RESET << endl;
    cout << BLUE << BOLD << "+------------+------------+------------------+------------¦" << RESET << endl;
    
    int count = 0;
    double totalArea = 0.0;
    
    while (getline(fin, line)) {
        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);
        size_t pos3 = line.find(",", pos2 + 1);
        
        if (pos1 != string::npos && pos2 != string::npos && pos3 != string::npos) {
            string id = line.substr(0, pos1);
            string size = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string location = line.substr(pos2 + 1, pos3 - pos2 - 1);
            string crop = line.substr(pos3 + 1);
            
            totalArea += stod(size);
            
            cout << BLUE << "¦ " << setw(10) << left << id << " ¦ " 
                 << setw(10) << left << size << " ¦ " 
                 << setw(16) << left << location << " ¦ " 
                 << setw(10) << left << crop << " ¦" << RESET << endl;
            count++;
        }
    }
    
    cout << BLUE << BOLD << "+---------------------------------------------------------+" << RESET << endl;
    cout << GREEN << BOLD << "     Total Land Plots: " << count << " | Total Area: " << totalArea << " acres" << RESET << endl;
    
    fin.close();
}
