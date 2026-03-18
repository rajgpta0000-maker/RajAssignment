#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int acc_no;
    string type;
    float balance;

public:
    // Function to assign values
    void assign()
    {
        cout << "Enter Depositor Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> acc_no;

        cout << "Enter Account Type (Saving/Current): ";
        cin >> type;

        cout << "Enter Balance Amount: ";
        cin >> balance;
    }

    // Function to deposit amount
    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;
        cout << "Amount Deposited Successfully." << endl;
    }

    // Function to withdraw amount
    void withdraw()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Withdrawn Successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Function to display name and balance
    void display()
    {
        cout << "Depositor Name: " << name << endl;
        cout << "Balance Amount: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.assign();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
