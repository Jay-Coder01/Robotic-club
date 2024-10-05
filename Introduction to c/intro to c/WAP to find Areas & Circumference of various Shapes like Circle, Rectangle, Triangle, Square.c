#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, length, breadth, side, base, height;
    float circle_area, circle_circumference, rectangle_area, rectangle_perimeter, square_area, square_perimeter, triangle_area;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    circle_area = PI * radius * radius;
    circle_circumference = 2 * PI * radius;
    printf("Circle Area: %.2f, Circumference: %.2f\n", circle_area, circle_circumference);

    // Rectangle
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    rectangle_area = length * breadth;
    rectangle_perimeter = 2 * (length + breadth);
    printf("Rectangle Area: %.2f, Perimeter: %.2f\n", rectangle_area, rectangle_perimeter);

    // Square
    printf("Enter side of square: ");
    scanf("%f", &side);
    square_area = side * side;
    square_perimeter = 4 * side;
    printf("Square Area: %.2f, Perimeter: %.2f\n", square_area, square_perimeter);

    // Triangle
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    triangle_area = 0.5 * base * height;
    printf("Triangle Area: %.2f\n", triangle_area);

    return 0;
}
