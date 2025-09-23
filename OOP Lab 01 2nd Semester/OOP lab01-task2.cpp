#include<iostream>
using namespace std;
class Rectangle{
	public:
		
	// Attributes 
	int length;
	int width;

	// Member Functions .... Declaring functions inside the class
	void setDiamensions();
	void area();               
	void perimeter();
};
    //Defining Functions .....  Outside the class 
    
    void Rectangle::setDiamensions(){
    cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter the width: ";
	cin>>width; 
	 		
	}
	void Rectangle::area(){
		cout<<"The area of rectangle is: "<<length*width<<endl;
	}
	void Rectangle::perimeter(){
		cout<<"The perimeter of rectangle: "<<2*(length+width)<<endl;
	}
	
	int main(){
		Rectangle rectangle;
		rectangle.setDiamensions();
		rectangle.area();
		rectangle.perimeter();
		return 0;
	}
	


	
	
	
	
	
	

