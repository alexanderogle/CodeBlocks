#ifndef BANK_H
#define BANK_H
#include "Account.h"

class Bank
{
    public:
        Bank();
        virtual ~Bank();
        void addAccount(Account thisAccount);

    protected:

    private:
        Account accounts[0] = {};
};

#endif // BANK_H
