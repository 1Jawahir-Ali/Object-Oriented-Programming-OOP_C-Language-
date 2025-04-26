#include<iostream>
using namespace std;
  // Simple Calculator 
  class Calculator{
  	public:
 // Attributes
  float num1;
  float num2;
  int opr;
  
 // Member Functios/Beheviours  ----> Functions Declaration
 float calculation();
 float add();
 float subtract();
 float multiply();
 float divide();	
  };
  // Function Definition
 float Calculator:: calculation(){
 	cout<<"Enter the num1: ";
 	cin>>num1;
 	cout<<"Enter the num2: ";
 	cin>>num2;
 	cout<<" \nEnter :- \n1. For addition \n2. For subtraction \n3. For Multiplication\n4. For division"<<endl;
 	cin>>opr;
 	switch(opr){
 	case 1:
	 cout<<"\nThe sum is: "<<add()<<endl;
	  return add();
	 break;
	case 2:
	 cout<<"\nThe subtraction is: "<<subtract()<<endl;
	 return subtract();
	 break;
	case 3:
	 cout<<"\nThe multiplication is: "<<multiply()<<endl;
	 return multiply() ;
	 break;
	case 4:
	 cout<<"\nThe division is: "<<divide()<<endl;
	 return divide();
	 break;
	default:
	cout<<"\nInvalid input.Try Again." ;  
	break; 	
 		
	 }
 }
     
 	// Function Definition
 	
 float Calculator::add() {
 	return num1+num2;
 }	
 float Calculator::subtract() {
 	return num1-num2;
 }
 float Calculator::multiply(){
 	return num1*num2;
 }
 float Calculator::divide(){
 	if(num2!=0){
 	return num1/num2;
 }else{cout<<"cannot divide by zero"<<endl;
 return 0;
 }
 }
