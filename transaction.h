#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

#include <iostream>
using namespace std;

class Transaction
{
private:
    int sender_account, receiver_account;
    float amount;

public:
    Transaction(int, int, float);

    void process_transaction(Account &sender, Account &receiver);
    void display_transaction_info();
};
#endif