#include <stdio.h>
#include <math.h>

int main() {
    int x, n, sum = 1;  // Start with 1 as the first term

    printf("Enter the value of x and n: ");
    scanf("%d %d", &x, &n);

    for (int i = 1; i <= n; i++) {
        sum += pow(x, i);
    }

    printf("The result of the series 1 + x^1 + x^2 + ... + x^%d is: %d\n", n, sum);

    return 0;
}
