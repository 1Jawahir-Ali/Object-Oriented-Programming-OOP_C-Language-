#include <iostream>
using namespace std;                              //Copy Constructor - Shallow Copy
class BankAccount {
  private:
    double* balance;

  public:
    // Constructor with dynamic allocation
    BankAccount(double b) {
        balance = new double(b);
        cout<<"Constructor: Balance allocated  with value "<<*balance<<endl;
    }

    // Function to modify balance
    void deposit(double amount) {
        *balance += amount;
    }

    void showBalance()const{
        cout<<"Balance at address (balance) is: "<<*balance<<endl;
    }

    // Destructor
    ~BankAccount() {
        cout<<"Destructor: Deleting balance at "<<balance<<endl;
        delete balance;
    }
};

int main(){
    BankAccount acc1(200.0);
    BankAccount acc2 = acc1;  // Default copy constructor (shallow copy)

    cout<<"Account Balances:"<<endl;
    acc1.showBalance();
    acc2.showBalance();

    // Modify acc2
    acc2.deposit(3500.0);                                
    cout<<"After modifying acc2:"<<endl;
    acc1.showBalance();  // Will also reflect the change!
    acc2.showBalance();

    cout<<"Program ending, destructors will be called."<<endl;
    return 0;
}

