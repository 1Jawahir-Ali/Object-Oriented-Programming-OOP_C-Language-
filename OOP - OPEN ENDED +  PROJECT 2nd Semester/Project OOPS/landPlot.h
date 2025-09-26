#ifndef LANDPLOT_H
#define LANDPLOT_H

#include <string>
using namespace std;

class LandPlot {
    int plotID;
    double size;
    string location;
    int cropID;
public:
    LandPlot(int id = 0, double s = 0, string loc = "", int c = 0);
    void assignCrop(int c);
    void save();
    void viewStatus();
};

#endif
