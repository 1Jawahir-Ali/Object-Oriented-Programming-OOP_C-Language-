#include "Weather.h"
#include "Validation.h"
#include <sstream>
#include <iomanip>
using namespace std;

WeatherModule::WeatherModule(double t, double r) : temperature(t), rainfall(r) {}

string WeatherModule::showWeather() {
    stringstream ss;
    
    ss << CYAN << BOLD << "\n+--------------------------------------------------------------+" << RESET << endl;
    ss << CYAN << BOLD << "¦                          WEATHER REPORT                         ¦" << RESET << endl;
    ss << CYAN << BOLD << "¦--------------------------------------------------------------¦" << RESET << endl;
    ss << CYAN << BOLD << "¦                                                              ¦" << RESET << endl;
    
    // Temperature with color coding
    string tempColor = GREEN;
    if (temperature > 35) tempColor = RED;
    else if (temperature > 30) tempColor = YELLOW;
    
    ss << "¦  " << BLUE << "     Temperature: " << tempColor << setw(5) << temperature << "°C" << BLUE << "                            ¦" << RESET << endl;
    
    // Rainfall with color coding
    string rainColor = GREEN;
    if (rainfall > 10) rainColor = RED;
    else if (rainfall > 5) rainColor = YELLOW;
    
    ss << "¦  " << BLUE << "   Rainfall:    " << rainColor << setw(5) << rainfall << "mm" << BLUE << "                            ¦" << RESET << endl;
    ss << CYAN << BOLD << "¦                                                              ¦" << RESET << endl;
    
    // Farming advice
    ss << "¦  " << MAGENTA << "   FARMING ADVICE:";
    if (rainfall > 10) {
        ss << RED << "     Too wet, avoid sowing              " << MAGENTA << "¦" << RESET << endl;
    } else if (temperature > 35) {
        ss << YELLOW << "     Too hot, delay sowing               " << MAGENTA << "¦" << RESET << endl;
    } else {
        ss << GREEN << "   Good conditions for sowing          " << MAGENTA << "¦" << RESET << endl;
    }
    
    ss << CYAN << BOLD << "¦                                                              ¦" << RESET << endl;
    ss << CYAN << BOLD << "+--------------------------------------------------------------+" << RESET << endl;
    
    return ss.str();
}
