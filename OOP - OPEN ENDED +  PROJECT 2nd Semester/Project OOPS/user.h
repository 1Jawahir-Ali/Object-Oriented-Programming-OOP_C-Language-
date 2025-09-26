#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    int userID;
    string name;
public:
    User(int id = 0, string n = "");
    virtual string login();
    virtual void viewProfile();
};

#endif
