#include <iostream>
#include "myClass.h"
#include "Account.h"
#include "Person.h"

using namespace std;
#include <string>

int main()
{
    // We received an initial security deposit refund of $1545
    float initialDeposit = 1545;
    // We'll setup the accounts which will be receiving refund
    float perRoomInit = initialDeposit/6;
    Account alaire(0, "Alaire");
    Account nicole(0, "Nicole");
    Account quinnAndSarah(0, "Quinn and Sarah");
    Account alex(0, "Alex");
    Account lewis(0,"Lewis");
    Account sasha(0, "Sasha");

    // Now that the accounts are setup, we make the initial deposit, which divides the
    // original amount of 1545 by 6 rooms
    alaire.deposit(perRoomInit);
    nicole.deposit(perRoomInit);
    quinnAndSarah.deposit(perRoomInit);
    alex.deposit(perRoomInit);
    lewis.deposit(perRoomInit);
    sasha.deposit(perRoomInit);

    // Now we'll account for the amounts owed to Sasha from everyone just for utilities

    // Alaire Utilities
    alaire.withdraw(35.04);
    sasha.deposit(35.04);

    // Sarah Utilities
    quinnAndSarah.withdraw(75.53);
    sasha.deposit(75.53);

    // Quinn Utilities
    quinnAndSarah.withdraw(75.53);
    sasha.deposit(75.53);

    // Alex Utilities
    alex.withdraw(75.53);
    sasha.deposit(75.53);

    // Nicole Utilities
    nicole.withdraw(75.53);
    sasha.deposit(75.53);

    // Print out a summary of the accounts
    // So we know how much everyone gets paid
    cout << "\nPrinting list of accounts!\n";
    sasha.accountSummary();
    alaire.accountSummary();
    alex.accountSummary();
    quinnAndSarah.accountSummary();
    nicole.accountSummary();
    lewis.accountSummary();

}
