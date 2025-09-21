#include <iostream>
using namespace std;

class Calculator{
public:
    // Add functions
    int add(int a,int b){
        return a+b;
    }
    
    double add(double a,double b){
        return a+b;
    }

    // Multiply functions
    int multiply(int a,int b){
        return a*b;
    }

    double multiply(double a,double b){
        return a*b;
    }

    // Subtract functions
    int subtract(int a,int b){
        return a-b;
    }

    double subtract(double a, double b){
        return a-b;
    }

    // Divide functions
    double divide(int a, int b){
        return (double)a/b;
    }

    double divide(double a, double b){
        return a/b;
    }
};

int main() {
    Calculator calc;

    cout<<"Add int: "<<calc.add(5,3)<<endl;
    cout<<"Add double: "<<calc.add(5.5,3.2)<<endl;

    cout<<"Multiply int: "<<calc.multiply(4,2)<<endl;
    cout<<"Multiply double: "<<calc.multiply(4.5, 2.0)<<endl;

    cout<<"Subtract int: "<<calc.subtract(10, 6)<< endl;
    cout<<"Subtract double: "<<calc.subtract(10.5, 6.2)<<endl;

    cout<<"Divide int: "<<calc.divide(10, 2)<<endl;
    cout<<"Divide double: "<<calc.divide(10.0, 2.5)<<endl;

    return 0;
}

