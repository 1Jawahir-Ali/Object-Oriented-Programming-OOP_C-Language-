#include <iostream>
#include <string>
using namespace std;
//                              Task No # 01
// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display_person_info() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

// Derived class
class Student:public Person {
private:
    string student_id;

public:
    Student(string n,int a,string id) : Person(n, a) {
        student_id = id;
    }

    void display_student_info() {
        cout<<"Student ID: "<<student_id<<endl;
    }
};

int main() {
    string name, student_id;
    int age;

    // Accept input from user
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); 

    cout << "Enter student ID: ";
    getline(cin, student_id);

    // Create Student object
    Student s(name, age, student_id);

    // Display information
    cout << "\n--- Person Info ---" << endl;
    s.display_person_info();

    cout << "\n--- Student Info ---" << endl;
    s.display_student_info();

    return 0;
}

