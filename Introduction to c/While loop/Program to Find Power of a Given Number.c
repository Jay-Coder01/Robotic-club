#include <stdio.h>

int main() {
    int base, exponent, result = 1;
    
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    int i = 0;
    while (i < exponent) {
        result *= base;
        i++;
    }

    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}
