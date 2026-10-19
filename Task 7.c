#include <stdio.h>

int main() {
    float sensor_data[3][4];

    printf("Enter temperature data for 3 days across 4 sensors:\n");
    for (int i = 0; i < 3; i++) {
        printf("Day %d readings (4 values): ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%f", &sensor_data[i][j]);
        }
    }

    int target_col;
    printf("Enter column index (0 to 3) of the defective sensor to remove: ");
    scanf("%d", &target_col);

    for (int i = 0; i < 3; i++) {
        for (int j = target_col; j < 3; j++) {
            sensor_data[i][j] = sensor_data[i][j + 1];
        }
    }

    printf("\n--- Updated 3x3 Sensor Data Matrix ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", sensor_data[i][j]);
        }
        printf("\n");
    }

    return 0;
}
