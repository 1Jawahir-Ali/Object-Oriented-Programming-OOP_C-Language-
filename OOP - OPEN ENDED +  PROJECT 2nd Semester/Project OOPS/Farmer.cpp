
#include "Farmer.h"
#include "Validation.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

Farmer::Farmer(int id, string n, string contact) : User(id, n), contactInfo(contact) {}

void Farmer::addFarmer() {
    printHeader("ADD NEW FARMER");
    
    int id = getIntInput("Enter Farmer ID: ");
    string n = getNameInput("Enter Farmer Name: ");
    string c = getContactInput("Enter Contact Info (10 digits): +92 ");

    ofstream fout("farmers.txt", ios::app);
    fout << id << "," << n << "," << c << endl;
    fout.close();
    
    printSuccess("Farmer added successfully to the system!");
}

void Farmer::viewFarmer() {
    ifstream fin("farmers.txt");
    string line;
    
    printHeader("FARMERS DATABASE");
    
    if (!fin) {
        printWarning("No farmers found in the system. Please add farmers first.");
        return;
    }
    
    // Very simple and compatible formatting
    cout << CYAN << BOLD << "----------------------------------------------" << RESET << endl;
    cout << CYAN << BOLD << "ID\tName\t\tContact" << RESET << endl;
    cout << CYAN << BOLD << "----------------------------------------------" << RESET << endl;
    
    int count = 0;
    while (getline(fin, line)) {
        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);
        
        if (pos1 != string::npos && pos2 != string::npos) {
            string id = line.substr(0, pos1);
            string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
            string contact = line.substr(pos2 + 1);
            
            // Using tabs for simple alignment
            cout << CYAN << id << "\t" 
                 << name << "\t\t" 
                 << "+92 " << contact << RESET << endl;
            count++;
        }
    }
    
    if (count == 0) {
        cout << CYAN << "No farmers data available" << RESET << endl;
    }
    
    cout << CYAN << BOLD << "----------------------------------------------" << RESET << endl;
    cout << GREEN << BOLD << "Total Farmers: " << count << RESET << endl;
    
    fin.close();
}



