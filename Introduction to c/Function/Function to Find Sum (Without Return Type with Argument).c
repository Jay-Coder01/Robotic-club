#include <stdio.h>

void findSum(int num) {
    int sum = 0;

    for (int i = 1; i <= num; i++) {
        sum += i;  // Calculate sum
    }

    printf("Sum of first %d numbers: %d\n", num, sum);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    findSum(number);  // Call the function
    return 0;
}
