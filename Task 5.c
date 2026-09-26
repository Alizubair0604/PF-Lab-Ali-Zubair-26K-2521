#include <stdio.h>
int main() {
	float confidence;
    int authorized;

    printf("Enter Face Recognition Confidence (0-100)\n");
    scanf("%f", &confidence);
    printf("Is the user Authorized? (1 for Yes, 0 for No)\n");
    scanf("%d", &authorized);

    printf("Recognition State: %s\n", (confidence >= 80) ? "Face recognized" : (confidence >= 50) ? "Manual verification required" : "Face not recognized");
                                       
    if (confidence < 50 || authorized == 0) {
        printf("Access denied\n");
    }
	else {
        if (confidence >= 80 && authorized == 1) {
            printf("Access granted\n");
        }
		else {
            printf("Pending manual verification\n");
        }
    }
     return 0;
}
