#include <iostream>
using namespace std;


class Counter{
private:
    static int count;

public:
    Counter(){
        count++;
    }
      //  Static Function to Print Total Count
    static void printCount(){
        cout<<"Total objects created: "<<count<<endl;
    }
};

int Counter::count=0;

int main(){
    Counter c1;
    Counter c2;
    Counter c3;
    Counter::printCount();
    return 0;
}

