#include <iostream>
using namespace std;

class Calculator{
private:
    double a,b;
public:
    void setNumbers(double x,double y){
        a=x;
        b = y;
    }
    
    void add(){
        cout<<a<<"+"<<b<<"= "<<a+b<<endl;
    }
    void multiply(){
        cout<<a<<"*"<<b<<"= "<<a*b<<endl;
    }
};
class Student{
private:
    string name;
    Calculator* calc;
public:
    Student(string n, Calculator* c):name(n),calc(c){}
    void addition(double x,doubley){
        calc->setNumbers(x,y);
        cout<<name<<"adds: ";
        calc->add();
    }
    
    void multiplication(double x,double y){
        calc->setNumbers(x,y);
        cout<<name<<" multiplies: ";
        calc->multiply();
    }
};

int main(){
    Calculator calc;
    
    Student s1("Ali",&calc);
    Student s2("Hamid",&calc);
    
    s1.addition(10,5);
    s2.multiplication(3,4);
    s1.multiplication(2,8); 
    return 0;
}
