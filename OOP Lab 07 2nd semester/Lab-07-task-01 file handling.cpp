#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "notes.txt";
    
    //  Create and write to the file
    cout << "Creating file (notes.txt) and writing in it" << endl;
    ofstream writeFile;
    writeFile.open("notes.txt",ios::out);  // Open the file
    
    if (writeFile.is_open()) {
        writeFile << "Hello World!" << endl;
        writeFile << "This is me Jawahir Ali " << endl;
        writeFile << "This is lab of File Handling" << endl;
        writeFile.close();
        cout << "\nFile created and initial content written successfully!" << endl;
    } else {
        cout << "Error: Unable to create or write to file!" << endl;
        return 1;
    }
    
    cout << "\n" << endl;

    //  Read and display the file contents
    cout << "\nReading and displaying file contents" << endl;
    ifstream readFile("notes.txt",ios::in);
    string line;
    
    if (readFile.is_open()) {
        while (getline(readFile, line)) {
            cout << line << endl;
        }
        readFile.close();
        cout << "\nFile read successfully!" << endl;
    } else {
        cout << "Error: Unable to read file!" << endl;
        return 1;
    }
    
    cout << "\n" << endl;
    
    //  Append name and roll number to the file
    cout << "\nAppending name and roll number" << endl;
    ofstream appendFile;
    appendFile.open("notes.txt", ios::app);  // Open in append mode
    
    if (appendFile.is_open()) {
        appendFile << "Appended: Name: Jawahir Ali" << endl;
        appendFile << "Appended: Roll Number: 2024-SE-34" << endl;
        appendFile.close();
        cout << "\nName and roll number appended successfully!" << endl;
    } else {
        cout << "Error: Unable to append to file!" << endl;
        return 1;
    }
    
    cout << "\n"<< endl;
    
    //  Read and display the updated file contents
    cout << "\nReading and displaying updated file contents\n " << endl;
    ifstream readUpdatedFile("notes.txt",ios::in);
    
    if (readUpdatedFile.is_open()) {
        cout << "Updated file contents:" << endl;
        while (getline(readUpdatedFile, line)) {
            cout << line << endl;
        }
        readUpdatedFile.close();
        cout << "\nUpdated file read successfully!" << endl;
    } else {
        cout << "Error: Unable to read updated file!" << endl;
        return 1;
    }
    
    
    cout << "\nAll operations completed successfully!" << endl;
    
    
    return 0;
}
