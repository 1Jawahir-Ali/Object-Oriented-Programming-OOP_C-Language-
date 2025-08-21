#include <iostream>
#include <cmath> 

using namespace std;

// Base class
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
    virtual ~Shape() {}        // Virtual destructor
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shapePtr; // Pointer to base class

    // Rectangle
    Rectangle rect(10.0, 5.0);
    shapePtr = &rect;
    cout << "Rectangle Area: " << shapePtr->area() << endl;

    // Circle
    Circle circ(7.0);
    shapePtr = &circ;
    cout << "Circle Area: " << shapePtr->area() << endl;

    return 0;
}

