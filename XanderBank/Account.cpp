#include <iostream>
#include "Account.h"
using std::cout;
using std::cin;
using std::endl;

Account::Account(float a, string b)
:balance(a),accountHolder(b)
{
    cout << "Initial balance is = " << balance << "\n";
    cout << "Account holder is: " << accountHolder << "\n";
    //ctor
}

Account::test()
{
    // Function for testing whether functions can be called on the objects
    cout << "Account object is functioning properly...\n";
}

Account::withdraw(float amount)
{
    // Function for altering the balance variable
    balance -= amount;
}

Account::deposit(float amount)
{
    // Function for altering the balance variable
    balance += amount;
}

Account::accountSummary()
{
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Current Balance: " << balance << endl;
}

float Account::returnBalance()
{
    return balance;
}

Account::~Account()
{
    //dtor
}
