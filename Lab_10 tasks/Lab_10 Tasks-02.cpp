#include <iostream>
using namespace std;

class Student{
	public:
	    int ID;     //  Instance member
	  	static int count;         //static Member 
		Student(){
			count++;
		}
	 static void show_count(){
	 	cout<<"the no of Objects Created: "<<count<<endl;
	 	//cout<<"The ID is: "<<ID<<endl; // This line is commented out
	 }
};

// Initialize static member variable
int Student::count = 0;

int main(){
	Student s1;
	Student s2;
	Student s3;
	Student s4;
	Student::show_count();
	
	return 0;
}
