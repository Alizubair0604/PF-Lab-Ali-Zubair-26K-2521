#include <stdio.h>

int main() {
    int n;

    printf("Enter the total number of rows (odd number): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // If an even number is entered, automatically adjust to the next odd number
    if (n % 2 == 0) {
        n++;
    }

    int mid = (n + 1) / 2; // Find the middle row index

    // 1. Upper half (including the middle row)
    for (int i = 1; i <= mid; i++) {
        // Print leading spaces
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }

        // Print stars and inner spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // 2. Lower half
    for (int i = mid - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }

        // Print stars and inner spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
