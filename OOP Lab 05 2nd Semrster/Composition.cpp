#include<iostream>
#include <iostream>
using namespace std;

// Display class (part of Calculator)
class Display {
private:
    double lastResult;

public:
    Display():lastResult(0.0){}
    
    void showResult(double result) {
        lastResult=result;
        cout<<"Display: "<<result<<endl;
    }
    
    double getLastResult() const{
        return lastResult;
    }
};


//  Calculator class (owns Display)
class Calculator {
private:
    Display display;  // Composition - Calculator owns Display

public:
    void add(double a,double b){
        double result=a+b;
        cout<<a<<"+"<<b<<"= ";
        display.showResult(result);
    }
    
    void multiply(double a,double b) {
        double result = a*b;
        cout<<a<<"*"<<b<<"= ";
        display.showResult(result);
    }
    
    void showLastResult() {
        cout<<"Last result: "<<display.getLastResult()<<endl;
    }
};

int main(){
    Calculator calc;
    
    calc.add(10, 5);
    calc.multiply(3, 4);
    calc.showLastResult();
    
    calc.add(20, 8);
    calc.showLastResult();
    
    return 0;
}
