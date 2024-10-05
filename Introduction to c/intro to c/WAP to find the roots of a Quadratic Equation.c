#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, imaginary;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\nRoot1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same.\nRoot1 = Root2 = %.2f\n", root1);
    } else {
        root1 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\nRoot1 = %.2f + %.2fi\nRoot2 = %.2f - %.2fi\n", root1, imaginary, root1, imaginary);
    }

    return 0;
}
