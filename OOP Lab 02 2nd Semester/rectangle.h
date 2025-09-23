#include<iostream>
using namespace std;
class Rectangle{
//  Attributes	
	float length;
	float width;
// Default Constructor 	
    public:
    	Rectangle(){
    		length=1.0;
    		width=1.0;		
		}
// Parameterized Constructor
        
        Rectangle(float l,float w){
        	length=l;
        	width=w;
		}
		Rectangle(float dimensions){
			length=dimensions;
			width=dimensions;
		}
// Member Functions
	float area(){
//    	cout<<"\nThe area of rectangle(LxW) is: "
        return length*width;
	}   
	void Displaydimensions() {
		cout<<"The dimensions of rectangle are:"<<endl;
		cout<<"Length= "<<length<<"\n"<<"Width= "<<width;
		cout<<"\nThe area of rectangle(LxW) is: "<<area();
	}
	
};











