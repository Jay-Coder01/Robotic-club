#include <stdio.h>

void findPower() {
    int base, exponent, result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("Result: %d\n", result);
}

int main() {
    findPower();  // Call the function
    return 0;
}
