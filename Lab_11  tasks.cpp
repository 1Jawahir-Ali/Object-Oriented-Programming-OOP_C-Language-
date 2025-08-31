#include <iostream>
using namespace std;

class A{
 public:
 //   Deceleration
	 static int count;
	 A(){
		 count++; //Increment for each object
	 }	
};

//  Definition outside of the class
int A::count = 0;

int main(){
 	A a;
 	A s;
 	A b;
 	A i;
 	A l;
 	cout<<"The total no  Object Created: "<<A::count<<endl;
 	return 0;
}
