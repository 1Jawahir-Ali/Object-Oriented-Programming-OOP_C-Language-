#ifndef LOGIN_H
#define LOGIN_H

#include <string>
using namespace std;

class LoginSystem {
private:
    string username;
    string password;
    bool isLoggedIn;
    
public:
    LoginSystem();
    void registerUser();
    bool login();
    void logout();
    bool checkLoginStatus();
};

#endif
