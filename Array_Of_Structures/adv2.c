#include <stdio.h>
#include <string.h>

// Define a structure to represent a bank account
struct BankAccount {
    int accountNumber;
    char accountHolderName[50];
    float balance;
};

// Function to display account details
void displayAccount(struct BankAccount account) {
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Holder Name: %s\n", account.accountHolderName);
    printf("Balance: %.2f\n", account.balance);
}

int main() {
    struct BankAccount accounts[100]; // Assume a maximum of 100 accounts
    int numAccounts = 0;

    while (1) {
        printf("\nBank Account Management\n");
        printf("1. Create a new account\n");
        printf("2. Perform a transaction\n");
        printf("3. Display account details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numAccounts < 100) {
                    printf("Enter account details:\n");
                    printf("Account Number: ");
                    scanf("%d", &accounts[numAccounts].accountNumber);

                    printf("Account Holder Name: ");
                    scanf("%s", accounts[numAccounts].accountHolderName);

                    printf("Initial Balance: ");
                    scanf("%f", &accounts[numAccounts].balance);

                    numAccounts++;
                    printf("Account created successfully.\n");
                } else {
                    printf("Maximum account limit reached. Cannot create more accounts.\n");
                }
                break;
                
            case 2:
                // Add code to perform transactions here
                break;

            case 3:
                // Add code to display account details here
                break;

            case 4:
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
