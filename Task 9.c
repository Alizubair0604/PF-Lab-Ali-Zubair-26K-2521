#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, base, exp_val;

    printf("--- Math Library Calculator ---\n");
    printf("Select\n1)Square root\n2)Power\n3)Absolute value\n4)Floor\n5)Ceiling\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter number\n");
            scanf("%lf", &num);
            if (num < 0) {
                printf("Square root of negative number is invalid!\n");
            }
			else {
                printf("Result: sqrt(%.2f) = %.2f\n", num, sqrt(num));
            }
            break;

        case 2:
            printf("Enter Base\n");
            scanf("%lf", &base);
            printf("Enter Exponent\n");
            scanf("%lf", &exp_val);
            printf("Result: pow(%.2f, %.2f) = %.2f\n", base, exp_val, pow(base, exp_val));
            break;

        case 3:
            printf("Enter number\n");
            scanf("%lf", &num);
            printf("Result: fabs(%.2f) = %.2f\n", num, fabs(num));
            break;

        case 4:
            printf("Enter number\n");
            scanf("%lf", &num);
            printf("Result: floor(%.2f) = %.2f\n", num, floor(num));
            break;

        case 5:
            printf("Enter number\n");
            scanf("%lf", &num);
            printf("Result: ceil(%.2f) = %.2f\n", num, ceil(num));
            break;

        default:
            printf("Invalid Menu Choice\n");
    }
     return 0;
}
