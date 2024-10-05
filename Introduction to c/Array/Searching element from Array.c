#include <stdio.h>

int main() {
    int arr[100], n, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
