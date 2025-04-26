#include <iostream>
#include <string>

class BankAccount {
private:
    double balance;
    std::string accountNumber;

public:
    BankAccount(std::string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of Rs" << amount << " successful." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of Rs" << amount << " successful." << std::endl;
        } else {
            std::cout << "Insufficient funds or invalid amount." << std::endl;
        }
    }

    // Function to get the current balance
    double getBalance() const {
        return balance;
    }

    // Function to get the account number
    std::string getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("123456789", 1000.0);

    // Deposit and withdraw money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(1500.0); // Attempt to withdraw more than the balance

    // Get and print the balance and account number
    std::cout << "Account Number: " << myAccount.getAccountNumber() << std::endl;
    std::cout << "Current Balance: Rs" << myAccount.getBalance() << std::endl;

    return 0;
}
