#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    int accountNumber;
    char name[MAX_NAME_LENGTH];
    float balance;
} Account;

Account accounts[MAX_ACCOUNTS];
int totalAccounts = 0;

void createAccount() {
    if (totalAccounts >= MAX_ACCOUNTS) {
        printf("Account limit reached.\n");
        return;
    }

    Account newAccount;
    newAccount.accountNumber = totalAccounts + 1;
    printf("Enter account holder's name: ");
    getchar(); // to consume the leftover newline character
    fgets(newAccount.name, MAX_NAME_LENGTH, stdin);
    newAccount.name[strcspn(newAccount.name, "\n")] = '\0'; // remove the trailing newline character
    newAccount.balance = 0.0;

    accounts[totalAccounts] = newAccount;
    totalAccounts++;

    printf("Account created successfully! Account Number: %d\n", newAccount.accountNumber);
}

void depositMoney() {
    int accountNumber;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber < 1 || accountNumber > totalAccounts) {
        printf("Invalid account number.\n");
        return;
    }

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid deposit amount.\n");
        return;
    }

    accounts[accountNumber - 1].balance += amount;
    printf("Amount deposited successfully. New balance: %.2f\n", accounts[accountNumber - 1].balance);
}

void withdrawMoney() {
    int accountNumber;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber < 1 || accountNumber > totalAccounts) {
        printf("Invalid account number.\n");
        return;
    }

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0 || amount > accounts[accountNumber - 1].balance) {
        printf("Invalid withdrawal amount.\n");
        return;
    }

    accounts[accountNumber - 1].balance -= amount;
    printf("Amount withdrawn successfully. New balance: %.2f\n", accounts[accountNumber - 1].balance);
}

void viewAccount() {
    int accountNumber;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber < 1 || accountNumber > totalAccounts) {
        printf("Invalid account number.\n");
        return;
    }

    Account account = accounts[accountNumber - 1];
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Holder: %s\n", account.name);
    printf("Balance: %.2f\n", account.balance);
}

void menu() {
    printf("\n--- Bank Management System ---\n");
    printf("1. Create a new account\n");
    printf("2. Deposit money\n");
    printf("3. Withdraw money\n");
    printf("4. View account details\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;

    do {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                viewAccount();
                break;
            case 5:
                printf("Exiting the system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
