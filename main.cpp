#include <iostream>
#include "account.h"
#include "transaction.h"
using namespace std;

int main()
{
    Account account_1(890890, "Emilio Gonzalez", 200);
    Account account_2(777666, "Alvaro Gonzalez", 1500);
    Account account_3(888888, "Chavo del 8", 8);

    cout << "Account Information: " << endl;
    account_1.display_account_info();
    cout << endl;

    account_2.display_account_info();
    cout << endl;

    account_3.display_account_info();
    cout << endl;

    Transaction transaction_1(777666, 890890, 200);
    cout << "Processing..." << endl;
    transaction_1.process_transaction(account_2, account_1);
    cout << endl;

    transaction_1.display_transaction_info();
    cout << endl;

    cout << "Updated Account Information: " << endl;
    account_1.display_account_info();
    cout << endl;
    account_2.display_account_info();
    cout << endl;

    return 0;
}