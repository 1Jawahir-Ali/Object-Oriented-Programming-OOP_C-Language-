#include<iostream>                     // Exception Handling
using namespace std;                  //  Program to handle dividing by Zero exception

int main(){
    double num1, num2;
    
    try{
        cout<<"Enter first number: ";
        cin>>num1;
        
        cout<<"Enter second number: ";
        cin>>num2;
        
        if(num2==0){
            throw(num2);
        }
        double result=num1/num2;
        cout<<"Division result: "<<result<<endl;
    }
    catch(double num2){
        cout<<"Error: Cannot divide by zero!"<<endl;
        cout<<"You enter num2= "<<num2;
    }
    return 0;
}
