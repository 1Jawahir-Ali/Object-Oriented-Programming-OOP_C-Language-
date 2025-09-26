#include "Login.h"
#include "Validation.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

LoginSystem::LoginSystem() : isLoggedIn(false) {}

void LoginSystem::registerUser() {
    printHeader("USER REGISTRATION");
    
    string newUsername = getTextInput("Enter new username: ");
    string newPassword = getTextInput("Enter new password: ");
    
    // Check if username already exists
    ifstream fin("users.txt");
    string line;
    while (getline(fin, line)) {
        size_t pos = line.find(",");
        string existingUser = line.substr(0, pos);
        if (existingUser == newUsername) {
            printError("Username already exists! Please choose a different username");
            fin.close();
            return;
        }
    }
    fin.close();
    
    // Save new user
    ofstream fout("users.txt", ios::app);
    fout << newUsername << "," << newPassword << endl;
    fout.close();
    
    printSuccess("User registered successfully! You can now login.");
}

bool LoginSystem::login() {
    if (isLoggedIn) {
        printWarning("You are already logged in!");
        return true;
    }
    
    printHeader("USER LOGIN");
    string inputUsername = getTextInput("Enter username: ");
    string inputPassword = getTextInput("Enter password: ");
    
    ifstream fin("users.txt");
    string line;
    bool found = false;
    
    while (getline(fin, line)) {
        size_t pos = line.find(",");
        string storedUser = line.substr(0, pos);
        string storedPass = line.substr(pos + 1);
        
        if (storedUser == inputUsername && storedPass == inputPassword) {
            found = true;
            break;
        }
    }
    fin.close();
    
    if (found) {
        username = inputUsername;
        password = inputPassword;
        isLoggedIn = true;
        cout << GREEN << BOLD << "\n   LOGIN SUCCESSFUL! Welcome, " << username << "!" << RESET << endl;
        cout << CYAN << "   Ready to manage your farm efficiently!   " << RESET << endl;
        return true;
    } else {
        printError("Invalid username or password! Please try again.");
        return false;
    }
}

void LoginSystem::logout() {
    if (isLoggedIn) {
        cout << YELLOW << BOLD << "\n   Goodbye, " << username << "! You have been logged out successfully." << RESET << endl;
        username = "";
        password = "";
        isLoggedIn = false;
    } else {
        printWarning("You are not logged in!");
    }
}

bool LoginSystem::checkLoginStatus() {
    return isLoggedIn;
}
