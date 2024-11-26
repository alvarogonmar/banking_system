#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int account_number;
    string account_holder;
    double balance;

public:
    Account(int, string, double);
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance();
    void display_account_info();

    int get_account_number();
    string get_account_holder();
};
#endif