#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Calculate sum
    }

    printf("Sum of all array elements: %d\n", sum);

    return 0;
}
