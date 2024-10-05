#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {  // Loop for each row
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
