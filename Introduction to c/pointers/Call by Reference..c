#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a; // Store the value at address a in temp
    *a = *b;   // Assign the value at address b to the address a
    *b = temp; // Assign the value in temp to the address b
}

int main() {
    int x, y;

    // Input values
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Swap values using call by reference
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
