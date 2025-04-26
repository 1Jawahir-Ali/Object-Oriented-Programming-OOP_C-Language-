#include<iostream>
#include<string>
using namespace std;
 // Temperature Converter
class Temperature{
	public:
 // Attributes
 double temp_in_celsius;
 double temfahrenheit;

 //	Member Functions
 	void temp_Convert(){
 		cout<<"Enter the temperature in  Celsius: ";
 		cin>>temp_in_celsius;
	 }
	void displaytemp(){
			cout<<"\nThe temperature in Fahrenheit is ="<<(temp_in_celsius*9/5)+32<<endl;
	}
	
	
};
 
