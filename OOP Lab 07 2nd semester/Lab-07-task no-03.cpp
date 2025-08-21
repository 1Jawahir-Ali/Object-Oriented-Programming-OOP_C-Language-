#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open  file in read mode
    ifstream File("notes.txt");
     
    // Check if file was opened successfully
    if (!File.is_open()) {
        cout << "Error: Could not open notes.txt" << endl;
        return 1;
    }
    
    // Open Copy file in write mode
    ofstream copyFile("copy_notes.txt");
    
    // Check if copy file was opened successfully
    if (!copyFile.is_open()) {
        cout << "Error: Could not create copy_notes.txt" << endl;
        File.close();
        return 1;
    }
    
    int lineCount = 0;
    string line;
    
    // Copy content and count lines
    while (getline(File, line)) {
        copyFile << line << endl;       // Write to Copy file
        lineCount++;
    }
    
    // Close both files
    File.close();
    copyFile.close();
    
    // Display the result
    cout << "File copied successfully!" << endl;
    cout << "Total number of lines copied: " << lineCount << endl;
    
    return 0;
}
