#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial;
    unsigned long long sum = 1;  // Start with 1 for the first term

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += factorial;
    }

    printf("The result of the series 1 + 1! + 2! + ... + %d! is: %llu\n", n, sum);

    return 0;
}
