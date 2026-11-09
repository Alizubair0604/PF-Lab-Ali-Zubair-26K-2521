#include <stdio.h>

int main() {
    int image[3][3];
    int (*ptr)[3] = image;

    printf("Enter values for a 3x3 image matrix (9 pixels):\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter pixel [%d][%d]: ", i, j);
            scanf("%d", (*(ptr + i) + j));
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(*(ptr + i) + j) *= 2;
        }
    }

    
    printf("\nUpdated 3x3 Image Matrix (Brightness Increased):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
