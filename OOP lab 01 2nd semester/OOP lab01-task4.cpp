#include<iostream>
#include<string>
using namespace std;
 // Temperature Converter
class Temperature{
	public:
 // Attributes
 double temp_in_celsius;
 double temp_fahrenheit;

 //	Member Functions
 	void temp_Convert(){
 		cout<<"Enter the temperature in  Celsius: ";
 		cin>>temp_in_celsius;
	 }
	void displaytemp(){
		    cout<<"\nFormula for Conversion:-"<<endl;
		    cout<<"\t\t(Temp in Degree Centigrate x 9/5) + 32"<<endl;
			cout<<"\nThe temperature in Fahrenheit is= "<<(temp_in_celsius*9/5)+32<<endl;
	}
	
	
};
 
 int main(){
 	Temperature T1;
 	T1.temp_Convert();
 	T1.displaytemp();
 	
 	return 0;
 }

