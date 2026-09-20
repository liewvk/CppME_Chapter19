#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void showBalance()
    {
        cout << "Current balance = " << balance << endl;
    }
};

int main()
{
    BankAccount acc;

    acc.deposit(1000);
    acc.withdraw(300);
    acc.showBalance();

    return 0;
}
