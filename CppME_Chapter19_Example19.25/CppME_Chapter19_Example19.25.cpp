#include <iostream>
using namespace std;

class ATMAccount
{
private:
    double balance;

public:
    ATMAccount()
    {
        balance = 1000;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Transaction failed." << endl;
    }

    void checkBalance()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    ATMAccount acc;

    acc.checkBalance();
    acc.deposit(500);
    acc.withdraw(300);
    acc.checkBalance();

    return 0;
}
