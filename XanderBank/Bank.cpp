#include "Bank.h"
#include "Account.h"

/* The Bank class is used to define a ledger system to record systems of accounts and their transactions */

Bank::Bank()
{
    //ctor
}

void Bank::addAccount(Account thisAccount)
{
    //Find however many accounts we currently have
    int numAccounts = sizeof(accounts);
}

Bank::~Bank()
{
    //dtor
}
