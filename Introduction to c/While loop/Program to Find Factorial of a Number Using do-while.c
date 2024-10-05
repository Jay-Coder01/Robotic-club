#include <stdio.h>

int main() {
    int num, i = 1;
    unsigned long long factorial = 1;  // Using unsigned long long to handle large results

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        do {
            factorial *= i;
            i++;
        } while (i <= num);

        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
