#include "transaction.h"

Transaction::Transaction(int sender, int receiver, float amount1)
{
    sender_account = sender;
    receiver_account = receiver;
    amount = amount1;
}

void Transaction::process_transaction(Account &sender, Account &receiver)
{
    if (amount > 0 && sender.get_balance() >= amount)
    {
        sender.withdraw(amount);
        receiver.deposit(amount);
        cout << "Transaction processed successfully" << endl;
    }
    else
    {
        cout << "Insufficient funds" << endl;
    }
}

void Transaction::display_transaction_info()
{
    cout << "Transaction Details: " << endl;
    cout << "Sender Account: " << sender_account << endl;
    cout << "Receiver Account: " << receiver_account << endl;
    cout << "Amount: $" << amount << endl;
}