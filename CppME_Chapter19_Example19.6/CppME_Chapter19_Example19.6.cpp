#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    void setBalance(double b)
    {
        if (b >= 0)
            balance = b;
    }

    void displayBalance()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount acc;

    acc.setBalance(1000);
    acc.displayBalance();

    return 0;
}
