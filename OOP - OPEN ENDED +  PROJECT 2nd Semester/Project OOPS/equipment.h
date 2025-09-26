#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>
using namespace std;

class Equipment {
    int equipmentID;
    string name;
    string status;
    string type;
    int plotID;
public:
    Equipment(int id = 0, string n = "", string st = "Good", string t = "General", int p = 0);
    void assignToPlot(int pid);
    void save();
    void viewEquipment();
};

#endif
