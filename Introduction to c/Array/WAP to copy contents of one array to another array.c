#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copying elements
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Elements in the second array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
