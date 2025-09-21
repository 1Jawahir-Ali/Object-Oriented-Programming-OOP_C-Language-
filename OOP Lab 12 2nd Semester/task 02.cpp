#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    try {
        for(int i=0;i<=5;i++){
            if(i>=5){
                throw out_of_range("Array out of Bound!");
            }
            cout<<arr[i]<<endl;
        }
    }
    catch (const out_of_range& e) {
        cerr<<"Exception Caught:"<<e.what()<<endl;
    }
    return 0;
}

