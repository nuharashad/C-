/*
	Nuha Rashad - CIS 22B
	Lab 4: In this lab we are going to ask the user to enter a password, which will be saved as a c-string, which we will thens test to find out whether it is strong enough or not.
	We will be testing to see whether it meets the length, case, number, and punctuation requirements.
	Date: 11 November 2019
	*/

#include "Password.h"
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

/*************************************************************************
This is the main function in which we will be asking the user to input the password, which we will then be sending to setPassword() which will
set the password to the c-string to be used for further testing in the program.

There are no parameters in this function.

The return value is an int with a return value of 0.
*************************************************************************/

int main()
{

    bool resultOfTests = false;
    Password passWord;
    string pWord = "";
    cout << "Hello! Welcome to the password strength tester. Today you will be asked to enter a password and we will test it for you to see whether it meets the strength criteria. If it does not, we will ask you to enter a password until it is strong enough." << endl;
    cout << "Please make sure that your password has at least one letter, one number, one uppercase, one lowercase, and punctuation mark, and is between 6-20 characters long" << endl;
    while (resultOfTests == false)
    {

        cout << "Please enter a password: ";
        cin >> pWord;

        passWord.setPassword(pWord);
        resultOfTests = passWord.testPassword();

    }

    passWord.~Password();

    cout << "Thank you for testing your password with us!" << endl;
    return 0;
}

//Output
/*****************************************************************************
Hello! Welcome to the password strength tester. Today you will be asked to enter a password and we will test it for you to see whether it meets the strength criteria. If it does not, we will ask you to enter a password until it is strong enough.
Please make sure that your password has at least one letter, one number, one uppercase, one lowercase, and punctuation mark, and is between 6-20 characters long
Please enter a password: nuharashad
Your password is between 6 and 20 characters long.
Please make sure that at least one character is uppercase.
Your password has at least one lowercase letter.
Please make sure that your password has at least one number.
Please make sure that you have at least one punctuation in your password.
Your password is not strong.
Please enter a password: NuhaRashad

Your password is between 6 and 20 characters long.
Your password has at least one uppercase letter.
Your password has at least one lowercase letter.
Please make sure that your password has at least one number.
Please make sure that you have at least one punctuation in your password.
Your password is not strong.
Please enter a password: NuhaRashad1

Your password is between 6 and 20 characters long.
Your password has at least one uppercase letter.
Your password has at least one lowercase letter.
Your password has at least one number.
Please make sure that you have at least one punctuation in your password.
Your password is not strong.
Please enter a password: RashadNuha123!

Your password is between 6 and 20 characters long.
Your password has at least one uppercase letter.
Your password has at least one lowercase letter.Your password has at least one number.
Your password has one punctuation.
Your password in strong!
Thank you for testing your password with us!

Process returned 0 (0x0)   execution time : 58.776 s
Press any key to continue.
****************************************************************************/
