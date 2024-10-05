#include <stdio.h>

int main() {
    int number;

    printf("Enter a number (1-5): ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 5.\n");
            break;
    }

    return 0;
}
