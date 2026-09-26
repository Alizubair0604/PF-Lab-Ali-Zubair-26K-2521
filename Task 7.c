#include <stdio.h>

int main() {
    float confidence, threshold;

    printf("Enter AI model confidence score (0-100)\n");
    scanf("%f", &confidence);
    printf("Enter required confidence threshold\n");
    scanf("%f", &threshold);

   
    if (confidence >= 90) {
        printf("Confidence level: Very High\n");
    } 
	else if (confidence >= 75) {
        printf("Confidence level: High\n");
    } 
	else if (confidence >= 50) {
        printf("Confidence level: Moderate\n");
    } 
	else {
        printf("Confidence level: Low\n");
    }
    if (confidence >= threshold && confidence >= 50) {
        printf("Prediction Decision: Accepted\n");
    }
	 else {
        printf("Prediction Decision: Rejected\n");
    }
    return 0;
}
