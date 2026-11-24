#include <stdio.h>

// Recursively adds up the digits until only a single digit remains
int calculateChecksum(int transactionID) {
    // Handle negative IDs safely just in case
    if (transactionID < 0) {
        transactionID = -transactionID;
    }

    // Base case: already a single digit
    if (transactionID < 10) {
        return transactionID;
    }

    // Sum the digits of the current number
    int sum = 0;
    int temp = transactionID;
    while (temp > 0) {
        sum += temp % 10; // Grab the last digit
        temp /= 10;       // Drop the last digit
    }

    // Recursive call on the new digit sum
    return calculateChecksum(sum);
}

int main() {
    int transactionID = 9875;
    int checksum = calculateChecksum(transactionID);

    printf("Transaction ID: %d\n", transactionID);
    printf("Digital Root Checksum: %d\n", checksum);

    return 0;
}
