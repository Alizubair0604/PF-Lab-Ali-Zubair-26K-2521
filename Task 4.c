#include <stdio.h>
#include <string.h>

int main() {
    char word_grid[3][100];
    char longest_word[50] = "";
    int max_len = 0;
    int max_row = 0;
    int max_col = 0;

    printf("Enter 3 rows, each containing 3 space-separated words:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: ", i);
        if (i == 0) getchar();
        scanf("%[^\n]", word_grid[i]);
        getchar();
    }

    for (int i = 0; i < 3; i++) {
        char w1[30], w2[30], w3[30];
        int count = sscanf(word_grid[i], "%s %s %s", w1, w2, w3);
        char *words[3] = {w1, w2, w3};

        for (int j = 0; j < count; j++) {
            int len = strlen(words[j]);
            if (len > max_len) {
                max_len = len;
                strcpy(longest_word, words[j]);
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("\nLongest Word: \"%s\" (Length: %d)\n", longest_word, max_len);
    printf("Located at Row Index: %d, Column Index: %d\n", max_row, max_col);

    return 0;
}
