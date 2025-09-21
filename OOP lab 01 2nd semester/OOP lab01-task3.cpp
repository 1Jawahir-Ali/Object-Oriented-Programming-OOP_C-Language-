#include<iostream>
#include<string>
using namespace std;
    // Voting Eligiblity
class Voter {
	public:
	// Attributes
	string name;
	int age;
	
	// Member Function Declaring inside the Class
	void is_Eligible();
	
 };
  // Member Function Definition Outside the Class
 void Voter::is_Eligible(){
 	cout<<"Enter Your age,please: ";
 	cin>>age;
 	if(age>18)
	 {
 		cout<<"You are eligible to cast vote"<<endl; 
	 }
 	else if(age<0){
 		cout<<"Invalid! age can't be negative."<<endl;
	 }
	else 
	 {
 		cout<<"Sorry! You are not eligible to cast vote because you are under 18."<<endl;
	 }
	
 }
 
 int main(){
 	Voter voter;
 	voter.is_Eligible();
 	return 0;
 	
 	
 }

