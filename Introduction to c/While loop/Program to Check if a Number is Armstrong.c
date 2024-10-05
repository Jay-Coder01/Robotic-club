#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, sum = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    // Calculate the sum of the digits raised to the power of n
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
