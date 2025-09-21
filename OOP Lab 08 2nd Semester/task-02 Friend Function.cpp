#include <iostream>
using namespace std;

class Rectangle; // Forward declaration

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    // Friend function declaration
    friend double totalArea(Circle c, Rectangle r);
};

class Rectangle {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Friend function declaration
    friend double totalArea(Circle c, Rectangle r);
};

// Friend function definition
double totalArea(Circle c, Rectangle r) {
    double circArea = 3.14 * c.radius * c.radius;
    double rectArea = r.length * r.width;
    return circArea + rectArea;
}

int main() {
    Circle circ(3);
    Rectangle rect(4, 5);

    cout << "Total area: " << totalArea(circ, rect) << endl;

    return 0;
}

