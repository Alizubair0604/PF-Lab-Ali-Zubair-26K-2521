#include <stdio.h>


void withdraw(float *balance, float amount);
void deposit(float *balance, float amount);

int main() {
    float accountBalance = 50000.0; // Initializing account balance
    int choice;
    float amount;

    printf("Initial Account Balance: PKR %.2f\n", accountBalance);
    printf("Select Transaction Type:\n");
    printf("1. Withdraw (Debit)\n");
    printf("2. Deposit (Credit)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        withdraw(&accountBalance, amount); // Pass address of balance
    } else if (choice == 2) {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        deposit(&accountBalance, amount); // Pass address of balance
    } else {
        printf("Invalid transaction choice.\n");
    }

    printf("Final Account Balance: PKR %.2f\n", accountBalance);

    return 0;
}

void withdraw(float *balance, float amount) {
    if (amount <= *balance) {
        *balance -= amount; 
        printf("Transaction Successful! Withdrawn: PKR %.2f\n", amount);
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}


void deposit(float *balance, float amount) {
    *balance += amount; 
    printf("Transaction Successful! Deposited: PKR %.2f\n", amount);
}
