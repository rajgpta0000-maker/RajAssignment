#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   

public:
    
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

   
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    
    void withdraw(double amount) {
        if(amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if(amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

main() {
    BankAccount account(1000);  

    account.displayBalance();

    account.deposit(500);
    account.displayBalance();

    account.withdraw(300);
    account.displayBalance();

    account.withdraw(1500); 

   
}
