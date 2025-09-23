#include<iostream>
#include<string>
using namespace std;
class Employee{
	// Attributes / Data Members
	int Id;
	string name;
	float salary;
	
	//  Default Constructor
	public:
		Employee(){
			Id=0;
			name="Not Asssigned";
			salary=0.0;
		}
	// Member Function to Display student Details	
	DisplayDetails(){
		cout<<"Employee Id is: "<<Id<<"\n"<<"Employee Name: "<<name<<"\n"<<"Employee salary is: "<<salary<<endl;
	}		
};













