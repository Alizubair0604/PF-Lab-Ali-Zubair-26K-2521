#include <stdio.h>
int main() {
	int type, algo;
	
    printf("Select problem type\n1)Classification\n2)Regression\n3)Clustering\n4)Computer vision\n");
    scanf("%d", &type);

    switch (type) {
        case 1:
            printf("\n--- Classification Algorithms ---\n1)Logistic regression\n2)Decision tree\n3)KNN\nSelect: ");
            scanf("%d", &algo);
            switch (algo) {
                case 1:
				 printf("Selected: Logistic Regression\n");
				 break;
                case 2:
				 printf("Selected: Decision Tree\n");
				 break;
                case 3:
				 printf("Selected: KNN\n");
				 break;
                default:
				 printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("\n--- Regression Algorithms ---\n1)Linear regression\n2)Polynomial regression\n3)SVR\nSelect: ");
            scanf("%d", &algo);
            switch (algo) {
                case 1:
				 printf("Selected: Linear Regression\n");
				  break;
                case 2:
				 printf("Selected: Polynomial Regression\n");
				  break;
                case 3:
				 printf("Selected: SVR\n");
				  break;
                default:
				 printf("Invalid choice\n");
            }
            break;

        case 3:
            printf("\n--- Clustering Algorithms ---\n1)K-Means\n2)Hierarchical clustering\n3)DBSCAN\nSelect: ");
            scanf("%d", &algo);
            switch (algo) {
                case 1:
				 printf("Selected: K-Means\n");
				  break;
                case 2:
				 printf("Selected: Hierarchical Clustering\n");
				  break;
                case 3:
				 printf("Selected: DBSCAN\n");
				  break;
                default:
				 printf("Invalid choice\n");
            }
            break;

        case 4:
            printf("\n--- Computer Vision Algorithms ---\n1. CNN\n2. YOLO\n3. R-CNN\nSelect: ");
            scanf("%d", &algo);
            switch (algo) {
                case 1:
				 printf("Selected: CNN\n");
				  break;
                case 2:
				 printf("Selected: YOLO\n");
				  break;
                case 3:
				 printf("Selected: R-CNN\n");
				  break;
                default:
				 printf("Invalid choice!\n");
            }
            break;

        default:
            printf("Invalid problem type\n");
    }

    return 0;
}
