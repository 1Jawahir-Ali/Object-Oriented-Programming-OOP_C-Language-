#ifndef CROP_H
#define CROP_H

#include <string>
using namespace std;

class Crop {
    int cropID;
    string name;
    string growthStage;
    string harvestDate;
public:
    Crop(int id = 0, string n = "", string g = "", string h = "");
    void harvestCrop();
    void addCrop();
    void viewCrop();
};

#endif
