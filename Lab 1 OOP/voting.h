#include<iostream>
#include<string>
using namespace std;
    // Voting Eligiblity
class Voter {
	public:
	// Attributes
	string name;
	int age;
	
	// Member Function
	void is_Eligible();
	
 };
 void Voter::is_Eligible(){
 	cout<<"Enter Your age,please: ";
 	cin>>age;
 	if(age>18)
	 {
 		cout<<"You are eligible to cast vote"<<endl; 
	 }
 	else
	 {
 		cout<<"Sorry! You are not eligible to cast vote because you are under 18"<<endl;
	 }
 }
 
