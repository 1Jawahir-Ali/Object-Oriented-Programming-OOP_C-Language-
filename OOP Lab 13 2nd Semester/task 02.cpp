#include <iostream>
#include <stdexcept>
using namespace std;
template<class T>
class Logger{
public:
    T message;

    void show(){
        if(message==T()){
            throw runtime_error("Empty or invalid log message!");
        }
        cout<<"Log: "<<message<<endl;
    }
};

int main(){
    try {
        Logger<int> log1;
        log1.message=100;
        log1.show();

        Logger<string> log2;
        log2.message="this is Program  2 of Templates";
        log2.show();

        Logger<string> log3;
        log3.message = ""; // This will throw
        log3.show();
    }
    catch (const exception& e) {
        cerr<<"Exception caught: "<< e.what()<<endl;
    }
    return 0;
}

