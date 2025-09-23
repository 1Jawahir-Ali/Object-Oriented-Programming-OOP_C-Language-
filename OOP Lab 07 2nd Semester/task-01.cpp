#include<iostream>
using namespace std;
class Distance{                   // Compile Time Polymorphism
	private:
		int feet;
		int inches;
		
	public:
		Distance(int f=0,int i=0){
			
			feet=f;
			inches=i;
		}
	
 // Function to ensure inches are in range
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }
	 
	bool operator==(const Distance &d) const{
	   return (feet==d.feet && inches==d.inches);
	}
	
	void display()const{
	         cout<<feet<<"Feet"<<inches<<"inches";
	                }
};

	int main() {
    Distance d1(4, 7);
    Distance d2(4, 7);
    Distance d3(7, 9);

    cout << "Comparing d1 and d2: ";
    if (d1 == d2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;

    cout<<"Comparing d1 and d3: ";
    if (d1 == d3)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;

    return 0;
}
	                     









