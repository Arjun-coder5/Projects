#include <stdio.h>

int main() {
    // Initialize balances for three accounts
    float account1 = 0.0;
    float account2 = 0.0;
    float account3 = 0.0;

    int choice; 
    int accountNumber;
    float amount;

    // Main loop for the banking menu
    while (1) {
        // Display the menu
        printf("\n--- Banking Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        // Perform actions based on user choice
        if (choice == 1) { // Deposit
            printf("Enter account number (1-3): ");
            scanf("%d", &accountNumber);
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (accountNumber == 1) {
                account1 += amount;
                printf("Deposited %.2f to account 1.\n", amount);
            } else if (accountNumber == 2) {
                account2 += amount;
                printf("Deposited %.2f to account 2.\n", amount);
            } else if (accountNumber == 3) {
                account3 += amount;
                printf("Deposited %.2f to account 3.\n", amount);
            } else {
                printf("Invalid account number! Please enter 1, 2, or 3.\n");
            }
        } 
        else if (choice == 2) { // Withdraw
            printf("Enter account number (1-3): ");
            scanf("%d", &accountNumber);
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (accountNumber == 1) {
                if (amount > account1) {
                    printf("Insufficient balance in account 1!\n");
                } else {
                    account1 -= amount;
                    printf("Withdrew %.2f from account 1.\n", amount);
                }
            } else if (accountNumber == 2) {
                if (amount > account2) {
                    printf("Insufficient balance in account 2!\n");
                } else {
                    account2 -= amount;
                    printf("Withdrew %.2f from account 2.\n", amount);
                }
            } else if (accountNumber == 3) {
                if (amount > account3) {
                    printf("Insufficient balance in account 3!\n");
                } else {
                    account3 -= amount;
                    printf("Withdrew %.2f from account 3.\n", amount);
                }
            } else {
                printf("Invalid account number! Please enter 1, 2, or 3.\n");
            }
        } 
        else if (choice == 3) { // Check Balance
            printf("Enter account number (1-3): ");
            scanf("%d", &accountNumber);

            if (accountNumber == 1) {
                printf("Balance in account 1: %.2f\n", account1);
            } else if (accountNumber == 2) {
                printf("Balance in account 2: %.2f\n", account2);
            } else if (accountNumber == 3) {
                printf("Balance in account 3: %.2f\n", account3);
            } else {
                printf("Invalid account number! Please enter 1, 2, or 3.\n");
            }
        } 
        else if (choice == 4) { // Exit
            printf("Exiting the program. Thank you!\n");
            break; // Exit the loop
        } 
        else {
            printf("Invalid choice! Please choose a valid option.\n");
        }
    }

    return 0;
}
