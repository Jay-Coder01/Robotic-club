#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {  // Loop for each row
        for (j = 1; j <= i; j++) { // Loop for printing numbers in each row
            printf("%d", j);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
