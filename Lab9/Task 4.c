#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int compute(int a, int b, int (*op)(int, int)) {
    return op(a, b); 
}

int main() {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    int sumResult = compute(num1, num2, add);
    int productResult = compute(num1, num2, multiply);
    int maxResult = compute(num1, num2, findMax);

    printf("\n--- RESULTS ---\n");
    printf("Sum: %d\n", sumResult);
    printf("Product: %d\n", productResult);
    printf("Maximum Value: %d\n", maxResult);

    return 0;
}
