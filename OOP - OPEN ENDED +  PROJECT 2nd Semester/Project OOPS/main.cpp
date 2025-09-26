#include <iostream>
#include <iomanip>
#include "Farmer.h"
#include "LandPlot.h"
#include "Crop.h"
#include "Equipment.h"
#include "Inventory.h"
#include "Weather.h"
#include "Login.h"
#include "Validation.h"
using namespace std;

void displayWelcomeHeader() {
    cout << GRAY << BOLD << "\n************************************************************" << RESET << endl;
    cout << GRAY << BOLD << "*" << RESET << "                                                          " << GRAY << BOLD << "*" << RESET << endl;
    
    cout << BRIGHT_WHITE << BOLD << "*" << RESET << "           " 
         << BRIGHT_WHITE << BOLD << "FARMING MANAGEMENT SYSTEM" 
         << RESET << "           " << BRIGHT_WHITE << BOLD << "*" << RESET << endl;
    
    cout << GRAY << BOLD << "*" << RESET << "                                                          " << GRAY << BOLD << "*" << RESET << endl;
    cout << GRAY << BOLD << "*" << CYAN << "                                                           " << GRAY << BOLD << "*" << RESET << endl;
    cout << GRAY << BOLD << "*" << RESET << "                                                          " << GRAY << BOLD << "*" << RESET << endl;
    cout << GRAY << BOLD << "*" << GREEN << "   Efficient Farm Management " << RESET << "|" << BLUE << " Data Analytics " << RESET << "|" << YELLOW << " Smart Farming " << GRAY << BOLD << "*" << RESET << endl;
    cout << GRAY << BOLD << "*" << RESET << "                                                          " << GRAY << BOLD << "*" << RESET << endl;
    cout << GRAY << BOLD << "************************************************************" << RESET << endl;
    cout << BRIGHT_WHITE << BLINK << ITALIC << BOLD << "\n          Developed By Group #02 - OOP Project" << RESET << endl;
    cout << CYAN << "         The University of Azad Jammu & Kashmir" << RESET << endl;
    cout << GREEN << "               Muzaffarabad Campus" << RESET << endl;
}
     

void displayLoginMenu() {
    cout << CYAN << BOLD << "\n================================" << RESET << endl;
    cout << CYAN << BOLD << "           LOGIN MENU           " << RESET << endl;
    cout << CYAN << BOLD << "================================" << RESET << endl;
    cout << CYAN << "1. Login" << RESET << endl;
    cout << CYAN << "2. Register" << RESET << endl;
    cout << CYAN << "3. Exit" << RESET << endl;
    cout << CYAN << BOLD << "================================" << RESET << endl;
    cout << CYAN << "Enter your choice: " << RESET;
}

void displayMainMenu() {
    cout << GREEN << BOLD << "\n==========================================" << RESET << endl;
    cout << GREEN << BOLD << "               MAIN MENU               " << RESET << endl;
    cout << GREEN << BOLD << "==========================================" << RESET << endl;
    cout << GREEN << "1.  Add Farmer" << RESET << endl;
    cout << GREEN << "2.  View Farmers" << RESET << endl;
    cout << GREEN << "3.  Add Land Plot" << RESET << endl;
    cout << GREEN << "4.  View Land Plots" << RESET << endl;
    cout << GREEN << "5.  Add Crop" << RESET << endl;
    cout << GREEN << "6.  View Crops" << RESET << endl;
    cout << GREEN << "7.  Add Equipment" << RESET << endl;
    cout << GREEN << "8.  View Equipment" << RESET << endl;
    cout << GREEN << "9.  Add Inventory Item" << RESET << endl;
    cout << GREEN << "10. View Inventory" << RESET << endl;
    cout << GREEN << "11. Weather Information" << RESET << endl;
    cout << GREEN << "0.  Logout & Exit" << RESET << endl;
    cout << GREEN << BOLD << "==========================================" << RESET << endl;
    cout << GREEN << "Enter your choice: " << RESET;
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    LoginSystem loginSystem;
    int choice;
    bool exitProgram = false;
    
    displayWelcomeHeader();

    // Login/Registration Loop
    while (!exitProgram) {
        displayLoginMenu();
        
        while (!(cin >> choice)) {
            printError("Please enter a valid number (1-3)");
            cin.clear();
            cin.ignore(1000, '\n');
            displayLoginMenu();
        }
        cin.ignore(); // Clear input buffer

        switch(choice) {
            case 1: { // Login
                if (loginSystem.login()) {
                    clearScreen();
                    displayWelcomeHeader();
                    // Main application loop after successful login
                    while (loginSystem.checkLoginStatus() && !exitProgram) {
                        displayMainMenu();
                        
                        while (!(cin >> choice)) {
                            printError("Please enter a valid number (0-11)");
                            cin.clear();
                            cin.ignore(1000, '\n');
                            displayMainMenu();
                        }
                        cin.ignore(); // Clear input buffer

                        switch(choice) {
                            case 1: { Farmer f; f.addFarmer(); break; }
                            case 2: { Farmer f; f.viewFarmer(); break; }
                            case 3: { LandPlot lp; lp.save(); break; }
                            case 4: { LandPlot lp; lp.viewStatus(); break; }
                            case 5: { Crop c; c.addCrop(); break; }
                            case 6: { Crop c; c.viewCrop(); break; }
                            case 7: { Equipment e; e.save(); break; }
                            case 8: { Equipment e; e.viewEquipment(); break; }
                            case 9: { Inventory i; i.addItem(); break; }
                            case 10: { Inventory i; i.viewInventory(); break; }
                            case 11: { 
                                WeatherModule w(28, 7); 
                                cout << w.showWeather(); 
                                break; 
                            }
                            case 0: { 
                                loginSystem.logout();
                                exitProgram = true;
                                cout << GREEN << BOLD << "\nThank you for using Farming Management System!" << RESET << endl;
                                break;
                            }
                            default: {
                                printError("Please enter a number between 0-11");
                                break;
                            }
                        }
                    }
                }
                break;
            }
            case 2: { // Register
                loginSystem.registerUser();
                break;
            }
            case 3: { // Exit
                cout << LIGHT_GRAY << BOLD << "\n========================================" << RESET << endl;
                cout << BRIGHT_WHITE << BOLD << "        Thank you for visiting!         " << RESET << endl;
                cout << BRIGHT_WHITE << BOLD << "               Goodbye!                 " << RESET << endl;
                cout << LIGHT_GRAY << BOLD << "========================================" << RESET << endl;
                exitProgram = true;
                break;
            }
            default: {
                printError("Please enter 1, 2, or 3");
                break;
            }
        }
    }

    return 0;
}


