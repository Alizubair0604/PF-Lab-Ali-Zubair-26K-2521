#include <stdio.h>

int main() {
    char student_names[3][50];
    int marks[3][3];
    float averages[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter full name for student %d: ", i + 1);
        if (i == 0) {
            getchar(); 
        }
        scanf("%[^\n]", student_names[i]);
        getchar(); 

        printf("Enter 3 subject marks for %s:\n", student_names[i]);
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            printf("  Mark %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }
        averages[i] = sum / 3.0f;
        getchar(); 
    }

    printf("\n--- Student Report ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Student: %s | Average Marks: %.2f\n", student_names[i], averages[i]);
    }

    return 0;
}
