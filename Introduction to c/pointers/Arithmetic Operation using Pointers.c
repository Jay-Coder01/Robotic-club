#include <stdio.h>

void arithmeticOperations(int *a, int *b, int *sum, int *diff, int *prod, float *quot) {
    *sum = *a + *b;           // Addition
    *diff = *a - *b;          // Subtraction
    *prod = *a * *b;          // Multiplication
    if (*b != 0) {
        *quot = (float)*a / *b;  // Division
    } else {
        *quot = 0;  // Handle division by zero
    }
}

int main() {
    int x, y, sum, diff, prod;
    float quot;

    // Input values
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Perform arithmetic operations using pointers
    arithmeticOperations(&x, &y, &sum, &diff, &prod, &quot);

    // Print results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    if (y != 0) {
        printf("Quotient: %.2f\n", quot);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
