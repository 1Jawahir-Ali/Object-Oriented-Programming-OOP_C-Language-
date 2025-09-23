#include <iostream>
#include <string>
using namespace std;

class Student {
public:               // Attributes / Data Members
    string name;
    int rollNumber;
    float marks;
                    //  Members Functions
    void getData() {
        cout << "Enter Your Name: ";
        getline(cin, name);   

        cout << "Enter your Roll No: ";
        cin >> rollNumber;

        cout << "Enter Your Marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "Name is: " << name << endl;
        cout << "Roll No: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student std;
    std.getData();
    std.displayData();
    return 0;
}


