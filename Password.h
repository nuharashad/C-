#ifndef PASSWORD_H
#define PASSWORD_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;


class Password
{
    public:
        Password();
        virtual ~Password();
        void setPassword(string);
        bool testPassword();
        void checkLength();
        void checkUpperCase();
        void checkLowerCase();
        void checkNumber();
        void checkPunctuation();



    protected:

    private:
        char *password;
        bool resultOfTests;
        bool passwordPunctuation;
        bool passwordLength;
        bool passwordUpperCase;
        bool passwordLowerCase;
        bool passwordNumber;
        int passwordSize;
};

#endif // PASSWORD_H
