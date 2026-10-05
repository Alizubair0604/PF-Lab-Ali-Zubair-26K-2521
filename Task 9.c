#include <stdio.h>
int main(){
    char word[100], rev[100];
    int length = 0, vowels = 0, consonants = 0, isPalindrome = 1;

    printf("Enter the word: ");
    scanf("%99s", word);

    printf("The original word: %s\n", word);
    while (word[length] != '\0')
    {
        length++;
    }
    printf("\nthe length of the array is %d",length);
        for (int i = 0; i < length; i++) {
        rev[i] = word[length - 1 - i];
    }
    rev[length] = '\0';
    printf("\nReversed word: %s\n", rev);

    for (int i = 0; i < length; i++) {
        char a = word[i];
        char b = rev[i];

        if (a >= 'A' && a <= 'Z') a = a + 32;
        if (b >= 'A' && b <= 'Z') b = b + 32;

        if (a != b) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The word is a palindrome\n");
    else
        printf("The word is not a palindrome\n");

    // 5 & 6. Count vowels and consonants
    for (int i = 0; i < length; i++) {
        char ch = word[i];

        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;

}
