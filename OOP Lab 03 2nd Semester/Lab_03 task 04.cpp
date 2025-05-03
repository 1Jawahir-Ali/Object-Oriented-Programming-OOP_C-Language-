#include<iostream>
using namespace std ;             //Constructor In Inheritance
class Shape{
	public:
	// Constructor
	Shape(){
		cout<<"Shape Constructor is called."<<endl;
	}
	
};
class Rectangle:public Shape{
	public:
		Rectangle(){
			cout<<"Rectangle Constructor is Called";
		}
	
};
int main(){
	Rectangle r1;
	cout<<"\n";
}
