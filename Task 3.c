#include <stdio.h>
#include <string.h> 

int main() {
    char email[100];
    char domain[50];

    printf("Enter corporate email address (e.g., user@rehbartech.com): ");
    scanf("%s", email);

    char *atSymbol = strchr(email, '@');

    if (atSymbol == NULL) {
        printf("Error: Invalid Email Format (missing '@' symbol).\n");
    } else {
        strcpy(domain, atSymbol + 1);

        printf("Extracted Domain: %s\n", domain);
    }

    return 0;
}
