#include<iostream>
#include<string>
using namespace std;
class BankAccount{
 // Attributes Of Class BankAccount
 string accountNumber;
 string holder;
 double balance;
 
 // Parametrized Constructor
 public:
 	
    BankAccount(string n,string h,double b){
 	accountNumber=n;
 	holder=h;
 	balance=b;
 }
 //	Member Functions to diplay Account Details
   void ShowAccountDetails(){
   	cout<<"The account Number is: "<<accountNumber<<"\n"<<"The holder name is: "<<holder<<endl;
   	cout<<"The account balance is: "<<balance;
   }
	
};



