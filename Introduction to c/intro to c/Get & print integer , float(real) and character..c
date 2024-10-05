#include <stdio.h>

int main() {
    int integer;
    float real;
    char character;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a float: ");
    scanf("%f", &real);

    printf("Enter a character: ");
    getchar(); // To consume any previous newline character
    scanf("%c", &character);

    printf("You entered: \nInteger: %d\nFloat: %f\nCharacter: %c\n", integer, real, character);

    return 0;
}
