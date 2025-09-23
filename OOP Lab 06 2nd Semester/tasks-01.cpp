#include <iostream>
using namespace std;         // Run Time Polymorphism
// Base class
class Shape {
public:
    virtual double area(){
        return 0;
    }
};

// Rectangle class
class Rectangle:public Shape{
public:
    double length,width;
    Rectangle(double l,double w){
        length=l;
        width=w;
    }
    double area() override{
        return length * width;
    }
};

// Circle class
class Circle:public Shape{
public:
    double radius;
    Circle(double r){
        radius=r;
    }
    double area() override{
        return 3.14*radius*radius;
    }
};

int main() {
    Shape* shape;

    Rectangle r(2, 3);
    Circle c(2);

    shape = &r;
    cout<<"Rectangle area: "<<shape->area()<<endl;

    shape = &c;
    cout<<"Circle area: "<<shape->area()<<endl;

    return 0;
}

