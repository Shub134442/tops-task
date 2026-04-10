#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() { balance = 0; }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient funds!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    double getBalance() { return balance; }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.withdraw(400);
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}
