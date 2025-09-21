#include <iostream>
#include <stdexcept>
using namespace std;
//Calculator Template with Exception Handling
template<typename T>
class Calculator {
public:
    T add(T a,T b){
	          return a+b; 
	 }
	 
    T subtract(T a,T b){
	          return a-b; 
	 }
    T multiply(T a,T b){
	          return a*b; 
	 }

    T divide(T a,T b){
        if(b==0){
            throw runtime_error("Division by zero error!");
        }
        return a/b;
    }
};

int main(){
    Calculator<double> calc;
    try {
        cout<<"Addition: "<<calc.add(10.5, 5.2)<<endl;
        cout<<"Subtraction: "<<calc.subtract(10.5, 5.2)<<endl;
        cout<<"Multiplication: "<<calc.multiply(10.5, 5.2)<<endl;
        cout<<"Division: "<<calc.divide(10.5, 0)<<endl;  // Will throw
    } 
	catch (const exception& e) {
        cerr<<"Exception caught: "<<e.what()<<endl;
    }
    return 0;
}



