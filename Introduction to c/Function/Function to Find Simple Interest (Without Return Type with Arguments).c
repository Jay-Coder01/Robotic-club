#include <stdio.h>

void findSimpleInterest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100;  // Calculate simple interest
    printf("Simple Interest: %.2f\n", interest);
}

int main() {
    float principal, rate, time;

    printf("Enter Principal, Rate of Interest, and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    findSimpleInterest(principal, rate, time);  // Call the function
    return 0;
}
