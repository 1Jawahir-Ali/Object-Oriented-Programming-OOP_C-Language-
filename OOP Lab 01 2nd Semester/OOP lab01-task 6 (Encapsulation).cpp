#include<iostream>
#include<string>
using namespace std;
class Product{
	private:
		// Attributes
		string name;
		double price;
		int quantity;
	
	public:
		
		// Member Fiunctions
		void setName(string n ){
			if(name==" "){
				cout<<" ERROR! name should not be empty."<<endl;
			}else{
				name=n;
			}
		}
	
	    void setPrice(double p){
	    	if(price>0){
	    		price=p;		
			}else{
				cout<<"Error! Price Can't be Negative. "<<endl;
			}
		}
		
		void setQuantity(int q){
			if(quantity<0){
				cout<<"Invalid! Quantity Can't be negative."<<endl;
			}else{
				quantity=q;
			}
		}
		
		
		string getName() { return name;	}
		double getprice(){ return price; }
		int getquantity(){ return quantity;}
		
};
int main(){
	Product product;
	product.setName("Watch");
	product.setPrice(2000);
	product.setQuantity(2);
	cout<<"Product Name  :  "<<product.getName()<<endl;
	cout<<"Product Price :  "<<product.getprice()<<endl;
	cout<<"Quantity      :  "<<product.getquantity()<<endl;
	return 0;
}

