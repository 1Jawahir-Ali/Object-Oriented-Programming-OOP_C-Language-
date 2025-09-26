#include "User.h"
#include <iostream>
using namespace std;

User::User(int id, string n) : userID(id), name(n) {}

string User::login() {
    return "Base user login";
}

void User::viewProfile() {
    cout << "User ID: " << userID << " | Name: " << name << endl;
}
