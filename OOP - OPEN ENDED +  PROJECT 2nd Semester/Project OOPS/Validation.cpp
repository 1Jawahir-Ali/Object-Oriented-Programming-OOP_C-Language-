#include "Validation.h"
#include <iostream>
#include <algorithm>
#include <cctype>
#include <iomanip>
using namespace std;

// Formatting functions
void printHeader(string title) {
    cout << MAGENTA << BOLD << "\n+--------------------------------------------------------------+" << RESET << endl;
    cout << MAGENTA << BOLD << "¦                      " << CYAN << title << MAGENTA << "                      ¦" << RESET << endl;
    cout << MAGENTA << BOLD << "+--------------------------------------------------------------+" << RESET << endl;
}

void printSuccess(string message) {
    cout << GREEN << BOLD << "  " << message << RESET << endl;
}

void printError(string message) {
    cout << RED << BOLD << " ERROR: " << message << RESET << endl;
}

void printWarning(string message) {
    cout << YELLOW << BOLD << "   " << message << RESET << endl;
}

void printInfo(string message) {
    cout << CYAN << "  " << message << RESET << endl;
}

// Input validation functions
int getIntInput(string prompt) {
    int value;
    while (true) {
        cout << CYAN << "  " << prompt << RESET;
        if (cin >> value) {
            cin.ignore();
            return value;
        } else {
            printError("Please enter a valid number");
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
}

double getDoubleInput(string prompt) {
    double value;
    while (true) {
        cout << CYAN << "  " << prompt << RESET;
        if (cin >> value) {
            cin.ignore();
            return value;
        } else {
            printError("Please enter a valid number");
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
}

string getStringInput(string prompt) {
    string value;
    while (true) {
        cout << CYAN << "  " << prompt << RESET;
        getline(cin, value);
        if (!value.empty()) {
            return value;
        } else {
            printError("This field cannot be empty");
        }
    }
}

string getNameInput(string prompt) {
    string value;
    while (true) {
        cout << CYAN << "  " << prompt << RESET;
        getline(cin, value);
        
        if (value.empty()) {
            printError("Name cannot be empty");
            continue;
        }
        
        bool valid = true;
        for (char c : value) {
            if (!isalpha(c) && !isspace(c)) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            return value;
        } else {
            printError("Name can only contain letters (A-Z) and spaces");
        }
    }
}

string getContactInput(string prompt) {
    string value;
    while (true) {
        cout << CYAN << " " << prompt << RESET;
        getline(cin, value);
        
        if (value.empty()) {
            printError("Contact number cannot be empty");
            continue;
        }
        
        bool valid = true;
        for (char c : value) {
            if (!isdigit(c)) {
                valid = false;
                break;
            }
        }
        
        if (valid && value.length() == 10) {
            return value;
        } else if (!valid) {
            printError("Contact number can only contain digits (0-9)");
        } else if (value.length() != 10) {
            printError("Contact number must be exactly 10 digits");
        }
    }
}

string getTextInput(string prompt) {
    string value;
    while (true) {
        cout << CYAN << "   " << prompt << RESET;
        getline(cin, value);
        
        if (!value.empty()) {
            return value;
        } else {
            printError("This field cannot be empty");
        }
    }
}
