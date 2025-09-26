#ifndef FARMER_H
#define FARMER_H

#include "User.h"

class Farmer : public User {
    string contactInfo;
public:
    Farmer(int id = 0, string n = "", string contact = "");
    void addFarmer();
    void viewFarmer();
};

#endif
