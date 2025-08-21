#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "notes.txt";
    
    // Open the file in read mode
    ifstream file("notes.txt",ios::in);
    
    if (!file.is_open()) {
        cout << "Error: Unable to open file '" << filename << "'" << endl;
        cout << "Please make sure the file exists in the current directory." << endl;
        return 1;
    }
    
    int lineCount = 0;
    string line;
    
    // Count lines by reading each line
    cout << "Counting lines in file: " << filename << endl;
    cout << "--------------------------------------" << endl;
    
    while (getline(file, line)) {
        lineCount++;
        cout << "Line " << lineCount << ": " << line << endl;
    }
    
    file.close();
    
    cout << "---------------------------------------" << endl;
    cout << "\nTotal number of lines: " << lineCount << endl;
    return 0;
}
