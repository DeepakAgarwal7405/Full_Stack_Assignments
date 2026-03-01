#include <iostream>
using namespace std;
/*
	Create a class BankAccount with data members like balance and member functions like deposit and withdraw. Implement encapsulation by keeping the data membersprivate.
	Objective: Understand encapsulation in classes.
*/
class BankAccount {
private:
    double balance;   // private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    // Function to check balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);   // initial balance = 1000

    cout << "Initial Balance: " << account.getBalance() << endl;
    
	double damt;
	cout<<"\nEnter Deposit Amount:- ";
	cin>>damt;
    account.deposit(damt);
    cout << "Balance after deposit: " << account.getBalance() << endl;

	double wamt;
	cout<<"\nEnter Withdraw Amount:- ";
	cin>>wamt;
    account.withdraw(wamt);
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

	cout<<endl;
    cout<<"Enter Withdraw Amount:- ";
	cin>>wamt;
	account.withdraw(wamt); // should show error
    cout<<endl;
    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}

