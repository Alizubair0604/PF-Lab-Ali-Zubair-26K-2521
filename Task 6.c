#include <stdio.h>

int main() {
    int shifts[4][3]; 

    printf("Enter initial 3x3 production data:\n");
    for (int i = 0; i < 3; i++) {
        printf("Workstation %d (3 shift values): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &shifts[i][j]);
        }
    }

    int target_row;
    printf("Enter target row index where new emergency shift should be inserted (0 to 2): ");
    scanf("%d", &target_row);

    int new_row[3];
    printf("Enter 3 production values for the new row: ");
    for (int j = 0; j < 3; j++) {
        scanf("%d", &new_row[j]);
    }


    for (int i = 3; i > target_row; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

   
    for (int j = 0; j < 3; j++) {
        shifts[target_row][j] = new_row[j];
    }

    printf("\n--- Resulting 4x3 Production Matrix ---\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}
