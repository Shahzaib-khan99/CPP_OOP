#include <iostream>
#include <string>
using namespace std;


class BankException {
private:
    string msg;
public:
    BankException(string m) : msg(m) {}
    string getMessage() { return msg; }
};

class BankAccount {
private:
    string name;
    double balance;
public:
    BankAccount(string n, double b) : name(n), balance(b) {}

    void withdraw(double amount) {
        if (amount < 0)
            throw BankException("Negative withdrawal not allowed!");
        if (amount > balance)
            throw BankException("Insufficient funds!");
        balance -= amount;
        cout << "Withdrawal successful. Balance: $" << balance << endl;
    }

    void display() {
        cout << "Account Holder: " << name << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Eve", 4000);
    acc.display();

    try {
        acc.withdraw(5000); 
    }
    catch (BankException &e) {
        cout << "Error: " << e.getMessage() << endl;
    }

    acc.display();
    return 0;
}
