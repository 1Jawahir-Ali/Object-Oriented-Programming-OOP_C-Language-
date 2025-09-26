#ifndef WEATHER_H
#define WEATHER_H

#include <string>
using namespace std;

class WeatherModule {
    double temperature;
    double rainfall;
public:
    WeatherModule(double t = 30.0, double r = 5.0);
    string showWeather();
};

#endif
