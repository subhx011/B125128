#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNo;
    double balance;

public:
    BankAccount(int a, double b) {
        accountNo = a;
        balance = b;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int a, double b, double rate)
        : BankAccount(a, b) {
        interestRate = rate;
    }

    void display() {
        double interest = balance * interestRate / 100;
        double updatedBalance = balance + interest;

        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNo << endl;
        cout << "Updated Balance: " << updatedBalance << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    CurrentAccount(int a, double b, double minBal, double charge)
        : BankAccount(a, b) {
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }

    void display() {
        if (balance < minimumBalance)
            balance -= maintenanceCharge;

        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNo << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount s(1001, 50000, 5);
    CurrentAccount c(1002, 8000, 10000, 500);

    s.display();
    cout << endl;
    c.display();

    return 0;
}