#include "Password.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

/*************************************************************************
This is the constructor in which we will be getting the input from the user, which we will then be sending down to setPassword to be
used in the program.

There is one string parameter for the input, which we will then convert to a c-string.

There is no return.
*************************************************************************/
Password::Password()
{

    int sizeOfCharArray = 20;
    password = new char [sizeOfCharArray];

}

void Password::setPassword(string pWord)
{
    passwordSize = pWord.length();
    char pword[passwordSize+1];
    for (int i = 0; i < passwordSize; i++)
    {
        pword[i] = pWord[i];
    }
    pword[passwordSize+1] = '\0';
    strcpy(password,pword);

}
/**********************************************************************
This is the function in which we test the password. It has six bool parameters which we will use
to test the password to see if it meets the set criteria.

There are 6 bool parameters, each for the testing of the password.

There is no return type as it is a void.
**********************************************************************/
bool Password::testPassword()
{
    /*************************************************************
    This is where the functions are being called. They are all void functions.
    *************************************************************/
     checkLength();
     checkUpperCase();
     checkLowerCase();
     checkNumber();
     checkPunctuation();

    if (passwordLength == true && passwordUpperCase == true && passwordLowerCase == true && passwordNumber == true && passwordPunctuation == true)
    {
        resultOfTests = true;
        cout << "Your password in strong!" << endl;
    }
    else
    {
        resultOfTests = false;
        cout << "Your password is not strong." << endl;
    }
    return resultOfTests;
}

    /*****************************************************
    In this function we will be testing the length of the password.

    There are no parameters, however we will be using the global variable passwordLength.

    There will be no return type as this is a void.
    *****************************************************/


    void Password::checkLength()
    {
        if (passwordSize < 6 || passwordSize  > 20)
        {
            passwordLength = false;
            cout << "Please make sure that your password is between 6 and 20 characters long." << endl;
        }
        else
        {
            passwordLength = true;
            cout << "Your password is between 6 and 20 characters long." << endl;
        }
    }

    /****************************************************
    In this function we will be testing the password to see whether it has one uppercase letter.

    There are no parameters, however we will be using the global variable passwordUpperCase.

    There will be no return type as this function is a void.
    ****************************************************/

    void Password::checkUpperCase()
    {

    int numberofUpperCase = 0;
    for (int i = 0; i < passwordSize; i++)
      {

        if (isupper(password[i]))
          {
              numberofUpperCase++;
          }

      }
    if (numberofUpperCase < 1)
    {
        passwordUpperCase = false;
        cout << "Please make sure that at least one character is uppercase." << endl;
    }
    else
    {
       passwordUpperCase = true;
        cout << "Your password has at least one uppercase letter." << endl;
    }
    }
    /***********************************************************************
    In this function we will be testing the password to see whether it has one lowercase letter.

    There are no parameters however we will be using the global variable passwordLowerCase.

    There will be no return type as this function is a void
    ***********************************************************************/

    void Password::checkLowerCase()
    {
        int numberOfLowerCase = 0;
        for (int i = 0; i < passwordSize; i++)
        {
            if (islower(password[i]))
            {
                numberOfLowerCase ++;
            }
        }
       if (numberOfLowerCase < 1)
       {

           passwordLowerCase = false;
           cout << "Please make sure that at east one letter is lowercase." << endl;

       }
       else
        {
          passwordLowerCase = true;
         cout << "Your password has at least one lowercase letter.";
       }

    }

    /*********************************************************************************
    In this function we will be testing to see whether it has one number.

    There will be no parameters however we will be using the global variable passwordNumber.

    There will be no return type as this function is a void.
    *********************************************************************************/

    void Password::checkNumber()
    {
       int numberOfNumbers = 0;
       for (int i = 0; i < passwordSize; i++)
       {
           if(isdigit(password[i]))
           {
            numberOfNumbers++;
           }
       }

       if (numberOfNumbers < 1)
       {
           passwordNumber = false;
           cout << "Please make sure that your password has at least one number." << endl;
       }
       else
       {
        passwordNumber = true;
       cout << "Your password has at least one number." << endl;
       }
    }

    /*****************************************************************************
    In this function we will be testing to see whether the password has one punctuation mark.

    There will be no parameters how ever we will be using the global variable passwordPunctuation

    There will be no return type as this function is a void.
    *****************************************************************************/

    void Password::checkPunctuation()
    {
        int numberOfPunctuation = 0;
        for (int i = 0; i < passwordSize; i++)
        {
            if(ispunct(password[i]))
            {
                numberOfPunctuation++;
            }
        }

        if (numberOfPunctuation < 1)
        {
            passwordPunctuation = false;
            cout << "Please make sure that you have at least one punctuation in your password." << endl;
        }
        else
        {
            passwordPunctuation = true;
            cout << "Your password has one punctuation." << endl;
        }

    }

/*************************************************************************************
This is the destructor which we will use to clear out the memory of the password c-string.

Password[] is the only object that is being used and there is no return type.
*************************************************************************************/
Password::~Password()
{
    delete [] password;
}
