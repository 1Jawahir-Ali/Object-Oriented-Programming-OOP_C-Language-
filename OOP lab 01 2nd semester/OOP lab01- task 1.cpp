#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		// Attributes 
		string name;
		int rollNumber;
		float marks;
		
	  // Member Functions
	  void getData(){
	  	cout<<"Enter Your Name: ";
	  	cin>>name;
	  	cout<<"Enter your Roll No: ";
	  	cin>>rollNumber;
	  	cout<<"Enter Your Marks: ";
	  	cin>>marks;
	  }
	  
	 void displayData(){
	 	cout<<"Name is: "<<name<<endl;
	 	cout<<"roll no: "<<rollNumber<<endl;
	 	cout<<"Marks: "<<marks<<endl;
	 	
	 }
};
int main(){

	Student std;
	std.getData();
	std.displayData();
}
