#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>
using namespace std;

// Color codes for beautiful console output
#define RESET         "\033[0m"
#define BOLD          "\033[1m"
#define ITALIC        "\033[3m"    // Added ITALIC
#define BLINK         "\033[5m"    // Added BLINK
#define BRIGHT_WHITE  "\033[97m"   // Added BRIGHT_WHITE
#define GRAY       "\033[90m"   // Bright Black = Gray
#define LIGHT_GRAY "\033[37m"   // Standard gray
#define DARK_GRAY  "\033[30m"   // Dark gray

// Color codes for beautiful console output
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

// Function declarations
int getIntInput(string prompt);
double getDoubleInput(string prompt);
string getStringInput(string prompt);
string getNameInput(string prompt);
string getContactInput(string prompt);
string getTextInput(string prompt);

// New formatting functions
void printHeader(string title);
void printSuccess(string message);
void printError(string message);
void printWarning(string message);
void printInfo(string message);

#endif
