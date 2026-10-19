#include <stdio.h>

int main() {
    char logs[3][30];
    int uppercase_count = 0;

    printf("Enter 3 CSV log entries:\n");
    for (int i = 0; i < 3; i++) {
        printf("Log entry %d: ", i + 1);
        if (i == 0) {
            getchar(); 
        }
        scanf("%[^\n]", logs[i]);
        getchar(); 
    }

    // Using Nested Loops to count uppercase letters character-by-character
    for (int i = 0; i < 3; i++) {
        for (int j = 0; logs[i][j] != '\0'; j++) {
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z') {
                uppercase_count++;
            }
        }
    }

    printf("\nTotal uppercase letters across all log entries: %d\n", uppercase_count);

    return 0;
}
