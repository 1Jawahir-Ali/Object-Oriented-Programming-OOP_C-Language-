#include <iostream>
#include <string>
using namespace std;


// Class: Printer

class Printer {
public:
    void print_document(const string &doc) {
        cout << "Printing document: " << doc << endl;
    }
};


// Class: Scanner

class Scanner {
public:
    void scan_document(const string &doc) {
        cout << "Scanning document: " << doc << endl;
    }
};


// Class: Photocopier (Multiple Inheritance)

class Photocopier : public Printer, public Scanner {
public:
    void photocopy(const string &doc) {
        cout << "--- Photocopying Process ---" << endl;
        scan_document(doc);   // from Scanner
        print_document(doc);  // from Printer
        cout << "Photocopy completed successfully!" << endl;
    }
};


// Main Function

int main() {
    Photocopier machine;
    string document;

    cout << "Enter document name: ";
    getline(cin, document);

    cout << "\nTesting Photocopier" << endl;
    machine.print_document(document);
    machine.scan_document(document);
    machine.photocopy(document);

    return 0;
}
