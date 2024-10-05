#include <stdio.h>

void findPower(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is: %d\n", base, exponent, result);
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    findPower(base, exponent);  // Call the function
    return 0;
}
