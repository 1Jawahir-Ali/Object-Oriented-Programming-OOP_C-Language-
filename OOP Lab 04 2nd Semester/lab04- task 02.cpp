#include <iostream>
#include <string>
using namespace std;


// Base Class: Person

class Person {
protected:
    string name;
    int age;

public:
    void input_person() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore(); 
    }

    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


// Derived Class: Employee (inherits Person)

class Employee : public Person {
protected:
    string employee_id;

public:
    void input_employee() {
        input_person(); // from Person
        cout << "Enter Employee ID: ";
        getline(cin, employee_id);
    }

    void display_employee() {
        display_person();
        cout << "Employee ID: " << employee_id << endl;
    }
};


// Derived Class: Manager (inherits Employee)

class Manager : public Employee {
private:
    string department;

public:
    void input_manager() {
        input_employee(); // from Employee (and Person)
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void display_manager() {
        display_employee();
        cout << "Department: " << department << endl;
    }
};


// Main Function

int main() {
    Manager mgr;

    cout << " Enter Manager Details:-" << endl;
    mgr.input_manager();

    cout << "Manager Information:-" << endl;
    mgr.display_manager();

    return 0;
}

