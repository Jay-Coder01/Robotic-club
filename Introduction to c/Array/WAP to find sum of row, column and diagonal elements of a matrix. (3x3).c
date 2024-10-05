#include <stdio.h>

int main() {
    int arr[3][3], rowSum[3] = {0}, colSum[3] = {0}, diagSum1 = 0, diagSum2 = 0;

    // Input elements of the matrix
    printf("Enter elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sums
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += arr[i][j];   // Sum of rows
            colSum[j] += arr[i][j];   // Sum of columns
            if (i == j) {
                diagSum1 += arr[i][j]; // Primary diagonal sum
            }
            if (i + j == 2) {
                diagSum2 += arr[i][j]; // Secondary diagonal sum
            }
        }
    }

    // Print row sums
    for (int i = 0; i < 3; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }

    // Print column sums
    for (int j = 0; j < 3; j++) {
        printf("Sum of column %d: %d\n", j + 1, colSum[j]);
    }

    // Print diagonal sums
    printf("Sum of primary diagonal: %d\n", diagSum1);
    printf("Sum of secondary diagonal: %d\n", diagSum2);

    return 0;
}
