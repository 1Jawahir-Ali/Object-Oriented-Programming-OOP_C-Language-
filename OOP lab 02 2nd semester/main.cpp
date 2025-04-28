#include<iostream>
#include<string>
#include"employee.h"
#include"bankaccount.h"
#include"rectangle.h"
#include"locker.h"
using namespace std;
int main(){
	 
//    Task no_1	 Employee Management System

//    Employee employee;
//    employee.DisplayDetails(); 
	
	
//   Task no_2 Bank Account Initialization

//   BankAccount a1("xxxxxxx","Jawahir Ali",10000);
//   a1.ShowAccountDetails(); 
	
	
// Task no_3  Constructor Overloading - Rectangle Area + Dimensions  	

/*	 Rectangle rectangle1;
	 Rectangle rectangle2(2.5,4.6);
	 Rectangle rectangle3(4.8);
	 cout<<"Rectangle 1 - Default Constructor): "<<endl;
	 rectangle1.Displaydimensions();
	 cout<<"\n"<<endl;
	 cout<<"Rectangle 2 - Parameterized Constructor: "<<endl;
	 rectangle2.Displaydimensions();
	 cout<<"\n"<<endl;
	 cout<<"Rectangle 3 - Single-Parameter Constructor: "<<endl;
	 rectangle3.Displaydimensions();
*/	
	
	
//	Task no_4   Destructor 

    cout<<"Locker on stack."<<endl;
    {
	   	Locker locker1;
	}
	cout<<endl;
	cout<<"Locker on heap."<<endl;
	Locker *locker2=new Locker();
    delete locker2;
    return 0;
}























