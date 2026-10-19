#include <stdio.h>

int main() {
    char secret_messages[3][100];

    printf("Enter 3 secret messages (only uppercase letters and spaces allowed):\n");
    for (int i = 0; i < 3; i++) {
        printf("Message %d: ", i + 1);
        if (i == 0) {
            getchar(); 
        }
        scanf("%[A-Z ]", secret_messages[i]);
        getchar(); 
    }

    printf("\n--- Filtered Messages & Word Counts ---\n");
    for (int i = 0; i < 3; i++) {
        int spaces = 0;
        for (int j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces++;
            }
        }
        int word_count = (secret_messages[i][0] != '\0') ? (spaces + 1) : 0;
        printf("Message: \"%s\" | Word Count: %d\n", secret_messages[i], word_count);
    }

    return 0;
}
