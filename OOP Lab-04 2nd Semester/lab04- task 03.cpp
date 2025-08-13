#include <iostream>
#include <string>
using namespace std;


// Base Class: Employee

class Employee {
protected:
    string name;
    double salary;

public:
    void input_employee() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore(); 
    }

    void display_employee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};


// Derived Class: Developer (inherits Employee)

class Developer : public Employee {
private:
    string programming_language;

public:
    void input_developer() {
        input_employee(); // call from base class
        cout << "Enter Programming Language: ";
        getline(cin, programming_language);
    }

    void display_developer() {
        display_employee();
        cout << "Programming Language: " << programming_language << endl;
    }
};


// Derived Class: Designer (inherits Employee)

class Designer : public Employee {
private:
    string design_tool;

public:
    void input_designer() {
        input_employee(); // call from base class
        cout << "Enter Design Tool: ";
        getline(cin, design_tool);
    }

    void display_designer() {
        display_employee();
        cout << "Design Tool: " << design_tool << endl;
    }
};

// Main Function

int main() {
    Developer dev;
    Designer des;

   

    cout << "\nEnter Developer Details:-" << endl;
    dev.input_developer();

    cout << "\nEnter Designer Details:-" << endl;
    des.input_designer();

    cout << "\nDeveloper Information:-" << endl;
    dev.display_developer();

    cout << "\nDesigner Information:-" << endl;
    des.display_designer();

    return 0;
}

