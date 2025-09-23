#include<iostream>
#include<string>
using namespace std;
class Locker{
	public:
	//  Constructror
	Locker(){
		cout<<"Locker allocated to customer."<<endl;
		
	}
	// Destructor
	~Locker(){
		cout<<"Locker returned by customer."<<endl;
	}
	
};




