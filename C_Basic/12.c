#include <stdio.h>

// Structure to represent a bank account
struct BankAccount {
    int accountNumber;
    double balance;
};

// Function to create a new bank account
struct BankAccount createAccount(int accountNumber) {
    struct BankAccount account;
    account.accountNumber = accountNumber;
    account.balance = 0.0;
    return account;
}

// Function to deposit money into an account
void deposit(struct BankAccount *account, double amount) {
    account->balance += amount;
}

// Function to withdraw money from an account
void withdraw(struct BankAccount *account, double amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
    } else {
        printf("Insufficient funds.\n");
    }
}

// Function to check account balance
double getBalance(struct BankAccount account) {
    return account.balance;
}

int main() {
    struct BankAccount account1 = createAccount(1001);
    deposit(&account1, 500.0);
    withdraw(&account1, 200.0);
    
    printf("Account %d Balance: %.2lf\n", account1.accountNumber, getBalance(account1));
    
    return 0;
}
