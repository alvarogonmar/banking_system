#include "account.h"
#include <string>
using namespace std;

Account::Account(int account_number1, string account_holder1, double balance1)
{
    account_number = account_number1;
    account_holder = account_holder1;
    balance = balance1;
}

void Account::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        cout << "Deposited: " << amount << " to account " << account_number << endl;
    }
    else
    {
        cout << "Invalid deposit" << endl;
    }
}

void Account::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrew " << amount << " from account " << account_number << endl;
    }
    else
    {
        cout << "Insufficient funds" << endl;
    }
}

double Account::get_balance()
{
    return balance;
}

void Account::display_account_info()
{
    cout << "Account Number: " << account_number << endl;
    cout << "Account Holder: " << account_holder << endl;
    cout << "Balance: " << balance << endl;
}

int Account::get_account_number()
{
    return account_number;
}

string Account::get_account_holder()
{
    return account_holder;
}