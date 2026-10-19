#include <stdio.h>

int main() {
    char sentences[3][100];

    printf("Enter 3 sentences separated by semicolons (;):\n");
    for (int i = 0; i < 3; i++) {
        scanf("%[^;]", sentences[i]);
        scanf("%*c"); 
    }

    printf("\n--- Vowel Count per Sentence ---\n");
    for (int i = 0; i < 3; i++) {
        int vowel_count = 0;
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            char ch = sentences[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel_count++;
            }
        }
        printf("Sentence %d: \"%s\" | Vowels: %d\n", i + 1, sentences[i], vowel_count);
    }

    return 0;
}
