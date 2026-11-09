#include <stdio.h>
#include <stdlib.h>

int main() {
    char customerName[50];
    int accountNumber;
    float withdrawalAmount;

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName); 
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);
    printf("Enter Withdrawal Amount (PKR): ");
    scanf("%f", &withdrawalAmount);

    FILE *fptr = fopen("bank_log.txt", "a");

    if (fptr == NULL) {
        printf("Error! Could not open file for writing.\n");
        exit(1);
    }

    fprintf(fptr, "Customer: %s | Account No: %d | Withdrawn: %.2f PKR\n", customerName, accountNumber, withdrawalAmount);

    fclose(fptr);

    printf("Transaction successfully logged to disk (bank_log.txt).\n");

    return 0;
}
