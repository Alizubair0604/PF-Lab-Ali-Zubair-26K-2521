#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
    char inputUser[50], inputPass[50];
    char storedUser[50], storedPass[50];

    printf("Enter Username: ");
    scanf("%s", inputUser);
    printf("Enter Password: ");
    scanf("%s", inputPass);

    FILE *fptr = fopen("credentials.txt", "r");

    if (fptr == NULL) {
        printf("Error: Credentials configuration file missing!\n");
        exit(1);
    }

    fscanf(fptr, "%s %s", storedUser, storedPass);

    fclose(fptr);

    if (strcmp(inputUser, storedUser) == 0 && strcmp(inputPass, storedPass) == 0) {
        printf("Access Granted!\n"); 
    } else {
        printf("Access Denied!\n");
    }

    return 0;
}
