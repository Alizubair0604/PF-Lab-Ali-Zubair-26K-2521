#include <stdio.h>
#include <string.h> 

int main() {
    char feedback[200];
    char sanitizedFeedback[300];

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    feedback[strcspn(feedback, "\n")] = '\0';

    
    printf("\nTotal characters in feedback: %lu\n", strlen(feedback));

   
    if (strstr(feedback, "good") != NULL) {
        printf("Sentiment Report: Positive keyword ('good') detected.\n");
    } 
    
    char *badPtr = strstr(feedback, "bad");
    if (badPtr != NULL) {
        printf("Sentiment Report: Negative keyword ('bad') detected. Sanitizing...\r\n");

        int index = badPtr - feedback;

        strncpy(sanitizedFeedback, feedback, index);
        sanitizedFeedback[index] = '\0'; 

        strcat(sanitizedFeedback, "not good");

        strcat(sanitizedFeedback, badPtr + 3);

        printf("Original Review: %s\n", feedback);
        printf("Updated Review:  %s\n", sanitizedFeedback);
    } else {
        printf("Sentiment Report: No negative keyword ('bad') found.\n");
    }

    return 0;
}
