#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence, dataset_size, model_score;
    int role, status, permission;

    printf("Enter accuracy in percentage\n");
    scanf("%f", &accuracy);
    printf("Enter confidence score in percentage\n");
    scanf("%f", &confidence);
    printf("Enter dataset size\n");
    scanf("%f", &dataset_size);

    printf("\nUser Role (1=Admin, 2=Developer, 3=Researcher)\n");
    scanf("%d", &role);
    printf("Model Status (1=Ready, 2=Testing, 3=Training)\n");
    scanf("%d", &status);

    printf("User permission value (1=View, 2=Train, 4=Test, 8=Deploy)\n");
    scanf("%d", &permission);

    model_score = (accuracy + confidence) / 2.0;

    printf("System Variable Memory Usage: %lu bytes\n", sizeof(model_score));
    printf("Calculated Model Score: %.2f\n", model_score);

    switch (role) {
        case 1: printf("Role: Admin\n"); break;
        case 2: printf("Role: Developer\n"); break;
        case 3: printf("Role: Researcher\n"); break;
        default: printf("Role: Unknown\n");
    }

    printf("Status Tag: %s\n", (status == 1) ? "Ready" : (status == 2) ? "Testing" : "Training");

    
    if (accuracy >= 80 && confidence >= 75 && dataset_size >= 1000) {
        if (status == 1) {
            if (permission & 8) {
                printf("\n>>> DEPLOYMENT STATUS: APPROVED FOR DEPLOYMENT <<<\n");
            } else {
                printf("\n>>> DEPLOYMENT STATUS: REJECTED (Missing Deployment Permission) <<<\n");
            }
        }
		else {
            printf("\n>>> DEPLOYMENT STATUS: REJECTED (Model Status is not Ready) <<<\n");
        }
    } 
	else {
        printf("\n>>> DEPLOYMENT STATUS: REJECTED (Metrics below minimum required thresholds) <<<\n");
    }

    return 0;
}
