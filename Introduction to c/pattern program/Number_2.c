#include <stdio.h>

int main() {
    int i, j, rows, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {      // Loop for each row
        for (j = 1; j <= i; j++) {     // Loop for printing numbers in each row
            printf("%d ", num);
            num++;                     // Increment the number
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
