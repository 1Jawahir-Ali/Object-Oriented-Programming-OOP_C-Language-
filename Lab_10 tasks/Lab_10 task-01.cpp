#include <iostream>
using namespace std;                     
class Shape{
	public:
		virtual  void calculate_Area()=0;	//Pure Virtual Function
	
};
 class Rectangle:public Shape{
        public:
		    int length;
		    int width;
		    Rectangle(int l,int w){
			    length=l;
			   	width=w;
		   }
 	 void calculate_Area () {
 	 cout<<"Area of Rectangle= "<< length*width <<endl;
	  }
	  
 };
 class Circle:public Shape{
       	public:
 		    int radius;
 	    	Circle(int r){
 			radius=r;
		 }
 		void calculate_Area (){
 			cout<<"Area of Circle= " <<radius*radius*(3.14)<<endl;
		 }
 };
 int main()
 {	
    Rectangle r1(2, 5);
	r1.calculate_Area();
	Circle c1(2);
 	c1.calculate_Area();
	
 }
