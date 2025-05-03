#include<iostream>              // Single Inheritance
using namespace std;
class Person{                  //------------->This is Base class / Parent Class
	protected:
	// Attributes 	
	string name;
	int age;
	// Member Functions 
	public:
	void setPerson(string n,int a){
		name=n;
		age=a;
	}
	void showPerson(){
		cout<<"The Name is: "<<name<<endl;
		cout<<"The age is: "<<age<<" Years"<<endl;
	}
	
};

class Student:public Person{    //------->This is Child Class /  Derived Class           
	public:
	// Attribute
	int rollNo;
	
	// Member Function 
	void setStudent( string n, int a,int r){
		setPerson(n,a); 
		rollNo=r;
	}
	
	void showStudent(){
		showPerson();
		cout<<"The roll no is: "<<rollNo<<endl;	
	}
};

int main(){
	Person p1;
	cout<<"\nBase CLass/ Parent Class"<<endl;
	p1.setPerson("Ali Muhammad",35);
	p1.showPerson();
	cout<<"\nChild class/Derived Class"<<endl;
	Student s1;
	s1.setStudent("Ali Muhammad",3,54);
	s1.showStudent();
	return 0;
}












