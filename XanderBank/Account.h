#ifndef ACCOUNT_H
#define ACCOUNT_H
//In order to use strings in this header, you need the following two lines below
using namespace std;
#include <string>

class Account
{
    public:
        Account(float initialAmount, string name);
        virtual ~Account();
        test();
        withdraw(float amount);
        deposit(float amount);
        float returnBalance();
        accountSummary();

    protected:

    private:
        float balance;
        const string accountHolder;
        int regVar;
        string thisString;
};

#endif //ACCOUNT_H
